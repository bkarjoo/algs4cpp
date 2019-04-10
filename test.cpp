#include <iostream>
#include "ResizingArrayBag.hpp"

using namespace std;


int main() {
  ResizingArrayBag<int> rab;
  cout << "isEmpty(): " << (rab.isEmpty() ? "True" : "False") << endl;
  cout << "Size: " << rab.size() << endl;
  for (int i = 1; i <= 10; i++) rab.add(i);
  for (auto i = rab.begin(); i < rab.end(); i++) cout << *i << endl;
  return 0;
}
