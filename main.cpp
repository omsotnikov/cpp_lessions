#include <iostream>

int factorial(int n) {

  int res = 1;
  for(int i = 1; i <= n; i++) {
    res = res * i;
  }

  return res;

}

// entry point
int main() {

  std::cout << "Hello world!" << std::endl;
  std::cout << "The value of 5! is " << factorial(5) << std::endl;

  return 0;
}
