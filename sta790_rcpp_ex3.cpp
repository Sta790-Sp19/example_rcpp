#include <Rcpp.h>

// [[Rcpp::export]]

SEXP as_wrap(SEXP input) {
  Rcpp::CharacterVector r = Rcpp::as<Rcpp::CharacterVector>(input);
  Rcpp::CharacterVector rev_r = Rcpp::rev(r);
  return Rcpp::wrap(rev_r);
}

/*** R
as_wrap(1:10)
as_wrap(LETTERS[1:10])
*/