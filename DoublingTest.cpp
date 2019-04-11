
#include "ThreeSum.hpp"
#include "stopwatch.hpp"
#include "StdRandom.hpp"
#define MAXIMUM_INTEGER 1000000

void timeTrial(int n) {
    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = uniform(-MAXIMUM_INTEGER, MAXIMUM_INTEGER);
    }
    StopWatch sw;
    int result = count(&a[0], n);

    printf("%7d%7d%9.3f seconds\n", n, result, sw.elapsedTime());
}

int main(int argc, char const *argv[]) {
  for (int n = 250; true; n += n) {
      timeTrial(n);
  }
  return 0;
}
