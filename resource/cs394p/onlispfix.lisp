; onlispfix.lisp: earlier definitions from onlisp.lisp for prolog

(defun varsym? (x)
  (and (symbolp x) (eq (char (symbol-name x) 0) #\?)))

(defun binding (x binds)
  (labels ((recbind (x binds)
             (aif (assoc x binds)
                  (or (recbind (cdr it) binds)
                      it))))
    (let ((b (recbind x binds)))
      (values (cdr b) b))))

(defmacro if-match (pat seq then &optional else)
  `(aif2 (match ',pat ,seq)
         (let ,(mapcar #'(lambda (v)
                           `(,v (binding ',v it)))
                       (vars-in then #'atom))
           ,then)
         ,else))

(defun vars-in (expr &optional (atom? #'atom))
  (if (funcall atom? expr)
      (if (var? expr) (list expr))
      (union (vars-in (car expr) atom?)
             (vars-in (cdr expr) atom?))))

(defun var? (x)
  (and (symbolp x) (eq (char (symbol-name x) 0) #\?)))

(defun varsym? (x) 
  (and (symbolp x) (not (symbol-package x))))

(defun gen-query (expr &optional binds)
  (case (car expr)
    (and (gen-and (cdr expr) binds))
    (or  (gen-or  (cdr expr) binds))
    (not (gen-not (cadr expr) binds))
    (t   `(prove (list ',(car expr) 
                       ,@(mapcar #'form (cdr expr))) 
                 ,binds))))
 
(defun gen-and (clauses binds)
  (if (null clauses)
      `(=values ,binds)
      (let ((gb (gensym)))
        `(=bind (,gb) ,(gen-query (car clauses) binds)
           ,(gen-and (cdr clauses) gb)))))
 
(defun gen-or (clauses binds)
  `(choose
     ,@(mapcar #'(lambda (c) (gen-query c binds)) 
               clauses)))
 
(defun gen-not (expr binds)
  (let ((gpaths (gensym)))
    `(let ((,gpaths *paths*))
       (setq *paths* nil)
       (choose (=bind (b) ,(gen-query expr binds)
                 (setq *paths* ,gpaths)
                 (fail))
               (progn
                 (setq *paths* ,gpaths)
                 (=values ,binds))))))

(=defun prove (query binds)
   (choose-bind r *rules* (=funcall r query binds)))

(defun form (pat)
  (if (simple? pat)
      pat
      `(cons ,(form (car pat)) ,(form (cdr pat)))))

(defvar *rules* nil)

(defmacro <- (con &rest ant)
  (let ((ant (if (= (length ant) 1) 
                 (car ant) 
                 `(and ,@ant))))
    `(length (conc1f *rules* 
                     ,(rule-fn (rep_ ant) (rep_ con))))))

(defun rule-fn (ant con)
  (with-gensyms (val win fact binds)
    `(=lambda (,fact ,binds)
       (with-gensyms ,(vars-in (list ant con) #'simple?)
         (multiple-value-bind 
             (,val ,win) 
             (match ,fact
                    (list ',(car con)
                          ,@(mapcar #'form (cdr con))) 
                    ,binds)
           (if ,win 
               ,(gen-query ant val) 
               (fail)))))))

(defun rule-fn (ant con)
  (with-gensyms (val win fact binds paths)                 ;
    `(=lambda (,fact ,binds ,paths)                        ;
       (with-gensyms ,(vars-in (list ant con) #'simple?)
         (multiple-value-bind 
             (,val ,win) 
             (match ,fact
                    (list ',(car con) 
                          ,@(mapcar #'form (cdr con))) 
                    ,binds)
           (if ,win 
               ,(gen-query ant val paths)                  ;
               (fail)))))))

(defmacro with-inference (query &rest body)
  (let ((vars (vars-in query #'simple?)) (gb (gensym)))
    `(with-gensyms ,vars
       (setq *paths* nil)
       (=bind (,gb) ,(gen-query (rep_ query) nil '*paths*) ;
         (let ,(mapcar #'(lambda (v) 
                           `(,v (fullbind ,v ,gb)))
                       vars)
           ,@body)
         (fail)))))

(defun gen-query (expr binds paths)                        ;
  (case (car expr)
    (and  (gen-and (cdr expr) binds paths))                ;
    (or   (gen-or  (cdr expr) binds paths))                ;
    (not  (gen-not (cadr expr) binds paths))               ;
    (lisp (gen-lisp (cadr expr) binds))                    ;
    (is   (gen-is (cadr expr) (third expr) binds))         ;
    (cut  `(progn (setq *paths* ,paths)                    ;
                  (=values ,binds)))                       ;
    (t    `(prove (list ',(car expr) 
                        ,@(mapcar #'form (cdr expr)))
                  ,binds *paths*))))                       ;
 
(=defun prove (query binds paths)                          ;
   (choose-bind r *rules* 
     (=funcall r query binds paths)))                      ;

(defun gen-and (clauses binds paths)                       ;
  (if (null clauses)
      `(=values ,binds)
      (let ((gb (gensym)))
       `(=bind (,gb) ,(gen-query (car clauses) binds paths);
          ,(gen-and (cdr clauses) gb paths)))))            ;

(defun gen-or (clauses binds paths)                        ;
  `(choose
     ,@(mapcar #'(lambda (c) (gen-query c binds paths))    ;
               clauses)))
 
(defun gen-not (expr binds paths)                          ;
  (let ((gpaths (gensym)))
    `(let ((,gpaths *paths*))
       (setq *paths* nil)
       (choose (=bind (b) ,(gen-query expr binds paths)    ;
                 (setq *paths* ,gpaths)
                 (fail))
               (progn
                 (setq *paths* ,gpaths)
                 (=values ,binds))))))
 
(defmacro with-binds (binds expr)
  `(let ,(mapcar #'(lambda (v) `(,v (fullbind ,v ,binds)))
                 (vars-in expr))
     ,expr))
 
(defun gen-lisp (expr binds)
  `(if (with-binds ,binds ,expr)
       (=values ,binds)
       (fail)))
 
(defun gen-is (expr1 expr2 binds)
  `(aif2 (match ,expr1 (with-binds ,binds ,expr2) ,binds)
         (=values it)
         (fail)))
