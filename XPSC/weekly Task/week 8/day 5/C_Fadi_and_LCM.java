import java.util.Scanner;

public class C_Fadi_and_LCM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x = sc.nextLong();
        long[] lcm = new long[20];
        int idx = 0;
        long i = 2;
        while (i * i <= x) {
            if (x % i == 0) {
                long cur = 1;
                while (x % i == 0) {
                    x /= i;
                    cur *= i;
                }
                lcm[idx++] = cur;
            }
            i++;
        }

        if (x > 1) {
            lcm[idx++] = x;
        }
        int n = idx;
        long ans_A = Long.MAX_VALUE;
        long ans_B = Long.MAX_VALUE;

        long k = 0;
        while (k < (1 << n)) {
            long a = 1;
            long b = 1;

            long j = 0;
            while (j < n) {
                if (((k >> j) & 1) == 1) {
                    a *= lcm[(int) j];
                } else {
                    b *= lcm[(int) j];
                }
                j++;
            }

            if (Math.max(a, b) < Math.max(ans_A, ans_B)) {
                ans_A = a;
                ans_B = b;
            }
            k++;
        }
        System.out.println(ans_A + " " + ans_B);
        sc.close();
    }
}
