;; File: sxio.s

(define (sx:display-menu msg* column items)

  (define title
  '("SEMILUX 0.0 (November 1992) for IBM PC TI Scheme 3.03"
    "   Sergei A.Romanenko, Keldysh Institute for Applied Mathematics,"
    "   Russia's Academy of Sciences, Miusskaya Sq.4, 125047, Moscow, Russia"
             ))

  ;; Centers and displays a message.

  (define (center msg)
    (let ((lm  (quotient (- 79 (string-length msg)) 2) ))
      (window-set-cursor! 'console (car (window-get-cursor 'console)) lm)
      (display msg)))

  (window-clear 'console)
  (for-each (lambda (item) (display item) (newline))
            title)
  (newline) (newline)
  (for-each (lambda (item) (center item) (newline))
            msg*)
  (newline)
  (do ((row   (car (window-get-cursor 'console)) (+ row 1))
       (items items (cdr items)))
      ((null? items) (newline))
      (window-set-cursor! 'console row column)
      (display (car items)))
  (window-set-cursor! 'console 23 0))

;;
;; Reads a character from the keyboard.
;; The character must be on the list lst.
;;

(define (sx:query msg lst)
  (when (not (null? msg))
        (fresh-line) (display msg) (display ": "))
  (flush-input)
  (let loop ()
    (let ((char (char-upcase (read-char))))
      (if (memv char lst)
          (begin (write-char char) char)
          (begin (write-char (integer->char 7)) (loop))))))

;;
;; Waits for a key to be pressed.
;;

(define (sx:pause)
  (newline) (display '"Press any key ...")
  (flush-input) (read-char))

;;
;; Requests a string.
;;

(define (sx:request-string msg)
  (fresh-line) (display msg)
  (sx:string-upcase (read-line)))

(define (sx:string-upcase s)
  (let* ((len  (string-length s))
         (new-s  (make-string len)))
    (do ((k 0 (+ 1 k)))
        ((= k len) new-s)
        (string-set! new-s k (char-upcase (string-ref s k))))))

;;
;; Reads characters upto #\return.
;;

;;(define (sx:read-line)
;;  (let loop ((lst '()))
;;    (let ((x (read-char)))
;;      (case x
;;        ((#\return)
;;         (write-char x) (reverse lst))
;;        ((#\backspace)
;;         (cond
;;           ((null? lst) (loop lst))
;;           (else
;;             (write-char x) (write-char #\space) (write-char x)
;;             (loop (cdr lst)))))
;;        (else
;;          (write-char x) (loop (cons x lst)))
;;        ))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;                                                                 ;;
;;                       Input and Output                          ;;
;;                                                                 ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;
;; Reads a Scheme program from the file "src".
;;

(define (sx:file->list file)
  (let ((port  (open-input-file file)))
    (let loop ((acc '()))
      (let ((o (read port)))
        (if (eof-object? o)
            (begin (close-input-port port) (reverse! acc))
            (loop (cons o acc)))))))

(define (sx:write-list lst port)
  (for-each
    (lambda (item) (write item port) (newline port) (newline port))
    lst))

;;
;; Pretty prints list "lst" into the file "name".

(define (sx:list->pp-file file lst width)
  (call-with-output-file
    file
    (lambda (port)
      (for-each
        (lambda (item) (pp item port width) (newline port) (newline port))
        lst)
      (close-output-port port))))

;;
;; Requests name.
;;

(define (sx:request-name msg name)
  (let* ((name (sx:cut-off-ext name))
         (str  (sx:request-string (string-append msg " [" name "]:"))))
    (if (string-null? str) name str)))

;;
;; Requests file name.
;;

(define (sx:request-file-name msg name ext)
  (let ((name (sx:cut-off-ext name)))
    (sx:norm-file-name
      name ext
      (sx:request-string (string-append msg " [" name "." ext "]: ")))))

;;
;; Normalizes file name.
;;

(define (sx:norm-file-name name ext name-ext)
  (let ((len (string-length name-ext)))
    (if (not (zero? len))
        (let ((pos (sx:char-pos #\. name-ext)))
          (cond
            ((not pos) (set! name name-ext))
            ((zero? pos) (set! ext (substring name-ext 1 len)))
            (else
              (set! name (substring name-ext 0 pos))
              (set! ext  (substring name-ext (+ pos 1) len)))))))
  (string-append name "." ext))

;;
;; Cuts off file name extension.
;;

(define (sx:cut-off-ext name-ext)
  (let ((pos (sx:char-pos #\. name-ext)))
    (if pos
        (substring name-ext 0 pos)
        name-ext)))

(define (sx:char-pos char str)
  (let ((len  (string-length str)))
    (let loop ((n 0))
      (cond
        ((= n len)  #f)
        ((eqv? char (string-ref str n))  n)
        (else
          (loop (+ n 1)))))))
