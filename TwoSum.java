public class TwoSum {

  public static int count(int[] a) {
    int N = a.length;
    int cnt = 0;
    for (int i = 0; i < N; i++)
      for (int j = i + 1; j < N; j++)
        if (a[i] + a[j] == 0) cnt++;
    return cnt;
  }
  public static void main(String[] args) {
    int[] a = In.readInts(args[0]);
    Stopwatch sw = new Stopwatch();
    StdOut.println(count(a));
    StdOut.printf("%.2f seconds\n", sw.elapsedTime());
  }
}
