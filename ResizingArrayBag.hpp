#ifndef RESIZING_ARRAY_BAG
#define RESIZING_ARRAY_BAG

#include <cassert>

template <typename Item>
class ResizingArrayBag {
private:
  // how do you make an array?
  Item* a{nullptr};
  unsigned capacity{0};
  unsigned n{0};
  void resize(unsigned capacity) {
    assert(capacity >= n);
    Item* temp = new Item[capacity];
    for (int i = 0; i < n; i++)
      temp[i] = a[i];
    std::swap(a, temp);
    delete[] temp;
  }
public:
  ResizingArrayBag() {
    a = new Item[2];
    capacity = 2;
  }
  ~ResizingArrayBag() {
    delete[] a;
  }
  bool isEmpty() const { return n == 0; }
  unsigned size() const { return n; }
  void add(Item item) {
    if (n == capacity) resize(capacity * 2);
    a[n++] = item;
  }
  Item* begin() { return &a[0]; }
  Item* end() { return &a[n]; }
};

#endif /* end of include guard: RESIZING_ARRAY_BAG */
