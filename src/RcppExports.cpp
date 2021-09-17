// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// testCpp_permutation
NumericVector testCpp_permutation(NumericVector x, int B);
RcppExport SEXP _sigtestscpp_testCpp_permutation(SEXP xSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(testCpp_permutation(x, B));
    return rcpp_result_gen;
END_RCPP
}
// testCpp_bootstrap
NumericVector testCpp_bootstrap(NumericVector x, int B);
RcppExport SEXP _sigtestscpp_testCpp_bootstrap(SEXP xSEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(testCpp_bootstrap(x, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sigtestscpp_testCpp_permutation", (DL_FUNC) &_sigtestscpp_testCpp_permutation, 2},
    {"_sigtestscpp_testCpp_bootstrap", (DL_FUNC) &_sigtestscpp_testCpp_bootstrap, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_sigtestscpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}