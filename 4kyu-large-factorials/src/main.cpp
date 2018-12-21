#include <string>

#include "specs.hpp"
#include "factorial.hpp"
using namespace std;

// Compiled using:
// g++ src/main.cpp src/factorial.cpp -o bin/main -Wall -iquote include -iquote ../modules -g

int main(void)
{
  Specs<string> tests;

  // Base tests
  tests.create(factorial( 5), "120");
  tests.create(factorial( 6), "720");
  tests.create(factorial(13), "6227020800");
  tests.create(factorial(25), "15511210043330985984000000");

  tests.run();
}
