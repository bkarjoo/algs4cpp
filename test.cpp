#include <iostream>
#include "StdRandom.hpp"
#include <cassert>
#include <algorithm>
#include "In.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
  assert(argc > 1);
  In in(argv[1]);
  auto whitelist = in.readAllInts();

  sort(whitelist.begin(), whitelist.end());

  for (auto i = whitelist.begin(); i < whitelist.end(); i++) cout << *i << endl;

  cout << "CALLING shuffle..." << endl;
  StdRandom::shuffle(&whitelist[0], whitelist.size());
  cout << "Done with shuffle..." << endl;

  for (auto i = whitelist.begin(); i < whitelist.end(); i++) cout << *i << endl;

  return 0;
}
