#' Permutation significance test
#' @export
test_permutation <- function(b, e, B = 1e5) {
  d <- e-b
  testCpp_permutation(d, B)
}

#' Bootstrap significance test
#' @export
test_bootstrap <- function(b, e, B = 1e5) {
  d <- e-b
  testCpp_bootstrap(d, B)
}
