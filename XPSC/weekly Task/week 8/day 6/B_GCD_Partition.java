import java.util.Scanner;

public class B_GCD_Partition {

    public static long gcd(long a, long b) {
        while (b != 0) {
            long temp = a;
            a = b;
            b = temp % b;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] v = new long[200000 + 10];

            for (int i = 1; i <= n; i++) {
                v[i] = scanner.nextLong();
                v[i] += v[i - 1];
            }

            long ans = Long.MIN_VALUE; // Use Long.MIN_VALUE for minimum long value

            for (int j = 1; j < n; j++) {
                ans = Math.max(ans, gcd( v[j], (v[n] - v[j]))); // Cast to int for gcd function
            }

            System.out.println(ans);
        }

        scanner.close();
    }
}
