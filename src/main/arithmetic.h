#ifndef ARITHMETIC_H
#define ARITHMETIC_H 1

#ifdef __cplusplus
extern "C" {
#endif

SEXP do_math1(SEXP, SEXP, SEXP, SEXP);
SEXP do_math2(SEXP, SEXP, SEXP, SEXP);
SEXP do_math3(SEXP, SEXP, SEXP, SEXP);
SEXP do_math4(SEXP, SEXP, SEXP, SEXP);
#ifdef WHEN_MATH5_IS_THERE
 SEXP do_math5(SEXP, SEXP, SEXP, SEXP);
#endif
SEXP do_cmathfuns(SEXP, SEXP, SEXP, SEXP);

SEXP complex_math1(SEXP, SEXP, SEXP, SEXP);
SEXP complex_math2(SEXP, SEXP, SEXP, SEXP);
SEXP complex_unary(ARITHOP_TYPE, SEXP);
SEXP complex_binary(ARITHOP_TYPE, SEXP, SEXP);

SEXP R_binary(SEXP, SEXP, SEXP, SEXP);
SEXP R_unary(SEXP, SEXP, SEXP);

#ifdef __cplusplus
}
#endif

#endif /* ARITHMETIC_H */
