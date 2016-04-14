// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// numeric_to_factor_cpp
CharacterVector numeric_to_factor_cpp(NumericVector num, CharacterVector levs, bool na_to_missing);
RcppExport SEXP syberiaMungebits2_numeric_to_factor_cpp(SEXP numSEXP, SEXP levsSEXP, SEXP na_to_missingSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type num(numSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type levs(levsSEXP);
    Rcpp::traits::input_parameter< bool >::type na_to_missing(na_to_missingSEXP);
    __result = Rcpp::wrap(numeric_to_factor_cpp(num, levs, na_to_missing));
    return __result;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP syberiaMungebits2_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    __result = Rcpp::wrap(rcpp_hello_world());
    return __result;
END_RCPP
}
