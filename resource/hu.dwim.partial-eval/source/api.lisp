;;; -*- mode: Lisp; Syntax: Common-Lisp; -*-
;;;
;;; Copyright (c) 2009 by the authors.
;;;
;;; See LICENCE for details.

(in-package :hu.dwim.partial-eval)

(def (layered-function e) partial-eval-form (ast)
  (:documentation "This function is the recursive variant of PARTIAL-EVAL. Takes an AST and returns the partially evaluated AST."))

(def (layered-function e) partial-eval-implicit-progn (ast)
  (:documentation "Takes an implicit progn AST and returns the partially evaluated body."))

(def (layered-function e) partial-eval-function-call (ast operator arguments)
  (:documentation "Takes the original AST, the function NAME symbol, and all function ARGUMENTS already partially evaluated. Returns another AST as the result of partially evaluating the function call."))

(def (layered-function e) eval-function-call? (ast name arguments)
  (:documentation "Takes the original AST, the function NAME symbol, and all function ARGUMENTS already partially evaluated. Returns TRUE if the function call should be evaluated at partial eval time, FALSE otherwise."))

(def (layered-function e) inline-function-call? (ast name arguments)
  (:documentation "Takes the original AST, the function NAME symbol and all function ARGUMENTS already partially evaluated. Returns TRUE if the function call should be inlined at partial eval time, FALSE otherwise."))

(def (layered-function e) lookup-variable-value? (ast name)
  (:documentation "Takes the original AST, and the variable NAME symbol. Returns TRUE if the value should be looked up at partial eval time, FALSE otherwise."))

(def (layered-function e) return-type (ast)
  (:documentation "Takes an AST and returns a lisp type specifier. Any value that could be returned by the given form in all possible environments is an instance of the returned type."))

(def (layered-function e) function-call-return-type (ast operator arguments)
  (:documentation "Takes the original AST, the function NAME symbol and all function ARGUMENTS already partially evaluated. Returns a lisp type specifier, any value that could be returned by the given function call in all possible environments is an instance of the returned type."))

(def (layered-function e) return-value (ast)
  (:documentation "Takes an AST and returns an AST that gives the return value when the original AST would return locally, otherwise NIL."))

(def (layered-function e) function-call-return-value (ast operator arguments)
  (:documentation "Takes the original AST, the function NAME symbol and all function ARGUMENTS already partially evaluated. Returns an AST that gives the return value when the original AST would return locally, otherwise NIL."))

(def (layered-function e) returns-new-allocation? (ast)
  (:documentation "Takes an AST and returns one of :NEVER, :UNKNOWN, or :ALWAYS depending on the allocation of the returned value in all possible environments."))

(def (layered-function e) returns-locally? (ast)
  (:documentation "Takes an AST and returns one of :NEVER, :UNKNOWN or :ALWAYS depending on the local returns in all possible environments."))

(def (layered-function e) exits-non-locally? (ast)
  (:documentation "Takes an AST and returns one of :NEVER, :UNKNOWN or :ALWAYS depending on the non local exits in all possible environments."))

(def (layered-function e) exits-function-call-non-locally? (ast operator arguments)
  (:documentation "Takes the original AST, the function NAME symbol, and all function ARGUMENTS already partially evaluated. Returns one of :NEVER, :UNKNOWN or :ALWAYS depending on the non local exits in all possible environments."))

(def (layered-function e) has-side-effect? (ast)
  (:documentation "Takes an AST and returns one of :NEVER, :UNKNOWN or :ALWAYS depending on the side effects in all possible environments."))

(def (layered-function e) has-function-call-side-effect? (ast operator arguments)
  (:documentation "Takes the original AST, the function NAME symbol, and all function ARGUMENTS already partially evaluated. Returns one of :NEVER, :UNKNOWN or :ALWAYS depending on the side effects in all possible environments."))

(def (layered-function e) collect-return-values (ast)
  (:documentation "Takes an AST and returns all possible return values in a list."))

(def (layered-function e) collect-non-local-exits (ast)
  (:documentation "Takes an AST and returns all possible non local exits in a list."))

(def (layered-function e) collect-side-effects (ast)
  (:documentation "Takes an AST and returns all possible side effects in a list."))
