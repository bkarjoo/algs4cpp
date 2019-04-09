#include <iostream>
#include "In.h"

using namespace std;

#include<vector>
vector<int> test_vec() {
  vector<int> a{};
  a.push_back(5);
  return a;
}

int main() {
  In in("file.txt");
  cout << test_vec()[0] << endl;
  return 0;
}
