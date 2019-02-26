#include <Rcpp.h>

Rcpp::NumericVector helper(Rcpp::NumericVector x) {
  return x * 2;
}

// [[Rcpp::export]]
Rcpp::NumericVector timesTwo(Rcpp::NumericVector x) {
  return helper(x);
}


/*** R
timesTwo(42)
*/
