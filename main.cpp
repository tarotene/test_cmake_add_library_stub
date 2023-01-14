#include <SomeLibrary/some.h>

#include <iostream>

int main(int argc, char *argv[]) {
  std::cout << "base application message" << std::endl;
  sm::lbr::printSomething();
}