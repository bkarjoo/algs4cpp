
public class Euclid
{
  public static int gcd(int first, int second) {
    if (second == 0) return first;
    int remainder = first % second;
    return gcd(second, remainder);
  }

  public static void main(String[] args) {
    System.out.println(Euclid.gcd(8,50));
  }
}
