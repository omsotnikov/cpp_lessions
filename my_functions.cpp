#include "my_functions.hpp"

// definition
int factorial(int n) {

  int res = 1;
  for(int i = 1; i <= n; i++) {
    res *= i;
  }

  return res;

}
