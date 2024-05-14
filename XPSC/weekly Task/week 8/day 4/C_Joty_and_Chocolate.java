import java.util.Scanner;

public class C_Joty_and_Chocolate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Solution obj = new Solution();

        long t = 1;
        // long t = sc.nextLong();
        while (t-- > 0) {
            obj.solve();
        }
        sc.close();
    }
}

class Solution {
    public long gcd(long a, long b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    public long lcm(long a, long b) {
        return (a / gcd(a, b)) * b;
    }

    public void solve() {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long a = sc.nextLong();
        long b = sc.nextLong();
        long p = sc.nextLong();
        long q = sc.nextLong();

        long ans = 0;
        long overlap = n / lcm(a, b);
        ans += (n / a) * p;
        ans += (n / b) * q;
        ans -= overlap * (p + q);
        ans += overlap * Math.max(p, q);
        System.out.println(ans);
        sc.close();
    }
}
