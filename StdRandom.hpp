#include <random>
#include <cassert>
#include <algorithm>
#include <iostream>

namespace StdRandom {



  int uniform(int min, int max) {
    std::random_device                  rand_dev;
    std::mt19937                        generator(rand_dev());
    std::uniform_int_distribution<int>  distr(min, max);
    return distr(generator);
  }

  int uniform(int max) {
    return uniform(0, max);
  }

  void shuffle(int* a, unsigned size) {
    assert(a != nullptr);
    for (int i = 0; i < size; i++) {
      int r = 1 + uniform(size - 1); // between i and size - 1;
      std::swap(a[i], a[r]);
    }
  }
}
