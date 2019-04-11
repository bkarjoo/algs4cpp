#include <iostream>
#include "BinarySearch.hpp"
#include <cassert>
#include "In.hpp"
#include "StdIn.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
  assert(argc > 1);
  In in(argv[1]);
  auto whitelist = in.readAllInts();

  sort(whitelist.begin(), whitelist.end());

  for (auto i = whitelist.begin(); i < whitelist.end(); i++) cout << *i << endl;
  while (!StdIn::isEmpty()) {
    int key = StdIn::readInt();
    int index = BinarySearch::indexOf(&whitelist[0], whitelist.size(), key);
    cout << index << endl;
  }

  return 0;
}
