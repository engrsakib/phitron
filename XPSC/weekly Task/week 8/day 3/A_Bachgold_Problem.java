import java.util.Scanner;

public class A_Bachgold_Problem {
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
    public void solve() {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long ans = 0;

        if (n % 2 == 0) {
            ans = n / 2;
            System.out.println(ans);
            for (int i = 0; i < ans; i++) {
                System.out.print("2 ");
            }
            System.out.println();
        } else {
            n -= 3;
            ans = n / 2;
            System.out.println(ans + 1);
            for (int i = 0; i < ans; i++) {
                System.out.print("2 ");
            }
            System.out.println("3");
        }
        sc.close();
    }
}
