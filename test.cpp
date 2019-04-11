#include <iostream>
#include "BinarySearch.hpp"
#include <cassert>

using namespace std;

int main(int argc, char const *argv[]) {
  assert(argc > 1);
  In in(argv[1]);
  In in = new In(args[0]);
  int[] whitelist = in.readAllInts();

  // sort the array
  Arrays.sort(whitelist);

  // read integer key from standard input; print if not in whitelist
  while (!StdIn.isEmpty()) {
      int key = StdIn.readInt();
      if (BinarySearch.indexOf(whitelist, key) == -1)
          StdOut.println(key);
  }
  return 0;
}
