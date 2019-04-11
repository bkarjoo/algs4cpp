
int indexOf(const int* a, unsigned size, int key) {
  int lo = 0;
  int hi = size - 1;
  while (lo <= hi) {
      // Key is in a[lo..hi] or not present.
      int mid = lo + (hi - lo) / 2;
      if      (key < a[mid]) hi = mid - 1;
      else if (key > a[mid]) lo = mid + 1;
      else return mid;
  }
  return -1;
}
