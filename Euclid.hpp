int gcd(int first, int second) {
  if (second == 0) return first;
  int remainder = first % second;
  return gcd(second, remainder);
}
