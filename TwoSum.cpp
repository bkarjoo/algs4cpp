#include <iostream>
#include "In.h"
#include "stopwatch.hpp"

using namespace std;

int count(const int* a, unsigned N) {
  int cnt{0};
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++)
      if (a[i] + a[j] == 0) cnt++;
  return cnt;
}

int count(const vector<int>& a) {
  return count(&a[0], a.size());
}

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
