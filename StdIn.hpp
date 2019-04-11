#include <string>
#include <iostream>

namespace StdIn {
  std::string line;

  bool isEmpty() {
    return !std::getline(std::cin, line);
  }
  int readInt() {
    return stoi(line);
  }
}
