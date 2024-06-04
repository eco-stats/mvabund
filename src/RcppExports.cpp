// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "mvabund_types.h"
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RtoAnovaCpp
List RtoAnovaCpp(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& isXvarIn, Rcpp::Nullable<RcppGSL::Matrix>& bID);
RcppExport SEXP _mvabund_RtoAnovaCpp(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP isXvarInSEXP, SEXP bIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type isXvarIn(isXvarInSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    rcpp_result_gen = Rcpp::wrap(RtoAnovaCpp(rparam, Y, X, isXvarIn, bID));
    return rcpp_result_gen;
END_RCPP
}
// RtoGlmAnova
List RtoGlmAnova(const List& sparam, const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O, RcppGSL::Matrix& isXvarIn, Rcpp::Nullable<RcppGSL::Matrix>& bID, RcppGSL::Vector& lambda, int& thread_num);
RcppExport SEXP _mvabund_RtoGlmAnova(SEXP sparamSEXP, SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP isXvarInSEXP, SEXP bIDSEXP, SEXP lambdaSEXP, SEXP thread_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type sparam(sparamSEXP);
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type isXvarIn(isXvarInSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Vector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int& >::type thread_num(thread_numSEXP);
    rcpp_result_gen = Rcpp::wrap(RtoGlmAnova(sparam, rparam, Y, X, O, isXvarIn, bID, lambda, thread_num));
    return rcpp_result_gen;
END_RCPP
}
// RtoGlm
List RtoGlm(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O);
RcppExport SEXP _mvabund_RtoGlm(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    rcpp_result_gen = Rcpp::wrap(RtoGlm(rparam, Y, X, O));
    return rcpp_result_gen;
END_RCPP
}
// RtoGlmSmry
List RtoGlmSmry(const List& sparam, const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, RcppGSL::Matrix& O, Rcpp::Nullable<RcppGSL::Matrix>& bID, RcppGSL::Vector& lambda);
RcppExport SEXP _mvabund_RtoGlmSmry(SEXP sparamSEXP, SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP OSEXP, SEXP bIDSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type sparam(sparamSEXP);
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type O(OSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Vector& >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(RtoGlmSmry(sparam, rparam, Y, X, O, bID, lambda));
    return rcpp_result_gen;
END_RCPP
}
// RtoSmryCpp
List RtoSmryCpp(const List& rparam, RcppGSL::Matrix& Y, RcppGSL::Matrix& X, Rcpp::Nullable<RcppGSL::Matrix>& bID);
RcppExport SEXP _mvabund_RtoSmryCpp(SEXP rparamSEXP, SEXP YSEXP, SEXP XSEXP, SEXP bIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type rparam(rparamSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RcppGSL::Matrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<RcppGSL::Matrix>& >::type bID(bIDSEXP);
    rcpp_result_gen = Rcpp::wrap(RtoSmryCpp(rparam, Y, X, bID));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mvabund_RtoAnovaCpp", (DL_FUNC) &_mvabund_RtoAnovaCpp, 5},
    {"_mvabund_RtoGlmAnova", (DL_FUNC) &_mvabund_RtoGlmAnova, 9},
    {"_mvabund_RtoGlm", (DL_FUNC) &_mvabund_RtoGlm, 4},
    {"_mvabund_RtoGlmSmry", (DL_FUNC) &_mvabund_RtoGlmSmry, 7},
    {"_mvabund_RtoSmryCpp", (DL_FUNC) &_mvabund_RtoSmryCpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_mvabund(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
