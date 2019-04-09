/*
*  Data files:   https://algs4.cs.princeton.edu/14analysis/1Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/2Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/4Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/8Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/16Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/32Kints.txt
*                https://algs4.cs.princeton.edu/14analysis/1Mints.txt
*/
public class ThreeSum {
  public static int count(int[] a) {
    int N = a.length;
    int cnt = 0;
    for (int i = 0; i < a.length; i++)
      for (int j = i+1; j < a.length; j++)
        for (int k = j+1; k < a.length; k++)
          if (a[i] + a[j] + a[k] == 0) {
            // StdOut.println(a[i] + " " + a[j] + " " + a[k]);
            cnt++;
          }
    return cnt;
  }

  public static void main(String[] args) {
    int[] a = In.readInts(args[0]);
    Stopwatch sw = new Stopwatch();
    StdOut.println(count(a));
    StdOut.printf("%.2f seconds\n", sw.elapsedTime());
  }
}
