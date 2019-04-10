/*
*  Data files:   https://algs4.cs.princeton.edu/14analysis/1Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/2Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/4Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/8Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/16Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/32Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/1Mints.txt
*/
#include <vector>

int count(const int* a, int N) {
  int cnt = 0;
  for (int i = 0; i < N; i++)
    for (int j = i+1; j < N; j++)
      for (int k = j+1; k < N; k++)
        if (a[i] + a[j] + a[k] == 0) {
          cnt++;
        }
  return cnt;
}

int count(const std::vector<int>& a) {
  return count(&a[0], a.size());
}
