#include <iostream>
#include "In.h"
#include "stopwatch.hpp"
#include "ThreeSum.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
  if (argc <= 1)
    cout << "please specify the file name . . . " << endl;
  else {
    auto a = readInts(argv[1]);
    StopWatch sw;
    cout << count(a) << endl;
    printf("%.3f seconds\n", sw.elapsedTime());
  }
  return 0;
}
