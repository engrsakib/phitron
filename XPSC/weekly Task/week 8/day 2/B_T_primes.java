import java.util.*;

public class B_T_primes {
    static class Solution {
        boolean isPrime(long n) {
            if (n == 1) {
                return false;
            }
            long i = 2;
            while (i * i <= n) {
                if (n % i == 0) {
                    return false;
                }
                i++;
            }
            return true;
        }

        boolean isPerfectSquare(long n) {
            long x = (long) Math.sqrt(n);
            return (x * x) == n;
        }

        void solve() {
            Scanner scanner = new Scanner(System.in);
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }
            for (int i = 0; i < n; i++) {
                if (isPrime((long) Math.sqrt(a[i])) && isPerfectSquare(a[i])) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
            scanner.close();
        }
    }

    public static void main(String[] args) {
        // _Created :  12 May 2024 ||   20:39:34
        // _File    :  B_T_primes.cpp
        // Writer    :  Md. Nazmus Sakib(engrsakib)
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
        Solution obj = new Solution();
        obj.solve();
    }
}
