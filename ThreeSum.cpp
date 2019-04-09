#include <iostream>
#include <string>
#include "In.h"
#include <algorithm>
#include "stopwatch.hpp"

using namespace std;

/*
*  Data files:   https://algs4.cs.princeton.edu/14analysis/1Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/2Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/4Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/8Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/16Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/32Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/1Mints.txt
*/
int count(vector<int> a) {
  int N = a.size();
  int cnt = 0;
  for (int i = 0; i < N; i++)
    for (int j = i+1; j < N; j++)
      for (int k = j+1; k < N; k++)
        if (a[i] + a[j] + a[k] == 0) {
          cnt++;
        }
  return cnt;
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
