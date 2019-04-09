#include <iostream>
#include "In.h"

using namespace std;

#include<vector>

int main() {
  In in("file.txt");
  auto res = in.readAllStrings();
  for (int i = 0; i < res.size(); i++)
    cout << res[i] << endl;
  return 0;
}
