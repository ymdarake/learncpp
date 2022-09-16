#include <iostream>

void printValue(int value) { std::cout << value; }
int test() { return 5; }

int main() {
  int a{};

  a = test(); // lldb test
  printValue(test());

  return 0;
}