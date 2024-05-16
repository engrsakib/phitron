import java.util.*;

public class D_Swords {
    static final long N = 200005;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // _Created :  16 May 2024 ||   14:14:38
        // _File    :  D_Swords.java
        // Writer    :  Md. Nazmus Sakib(engrsakib)
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم

        long t = 1;
        while (t-- > 0) {
            long n = sc.nextLong();
            long MAX = Long.MIN_VALUE;
            long[] v = new long[(int) N];
            long sum = 0;
            
            for (int i = 1; i <= n; i++) {
                v[i] = sc.nextLong();
                sum += v[i];
                MAX = Math.max(v[i], MAX);
            }
            
            long ans = 0;
            for (int j = 1; j <= n; j++) {
                ans = gcd(ans, MAX - v[j]);
            }
            
            System.out.println((MAX * n - sum) / ans + " " + ans);
        }
        sc.close();
    }

    private static long gcd(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
