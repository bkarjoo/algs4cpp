
#include "ThreeSum.hpp"
#include "stopwatch.hpp"
#define MAXIMUM_INTEGER 1000000

double timeTrial(int n) {
    int a[n];
    // for (int i = 0; i < n; i++) {
    //     a[i] = StdRandom.uniform(-MAXIMUM_INTEGER, MAXIMUM_INTEGER);
    // }
    StopWatch timer;
    count(&a[0], n);
    return timer.elapsedTime();
}

int main(int argc, char const *argv[]) {
  for (int n = 250; true; n += n) {
      double time = timeTrial(n);
      printf("%7d %7.1f\n", n, time);
  }
  return 0;
}
