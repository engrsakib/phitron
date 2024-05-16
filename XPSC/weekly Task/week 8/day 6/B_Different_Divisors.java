import java.util.*;

public class B_Different_Divisors {
    static final int N = 400010;
    static boolean[] prime = new boolean[N + 1];

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        cives();
        int t = scanner.nextInt();
        while (t-- > 0) {
            int a = scanner.nextInt();
            long ans = 1;
            int cnt = 0;
            int i = a + 1;
            while (i <= N) {
                if (prime[i]) {
                    ans *= i;
                    i += a - 1;
                    cnt++;
                }
                if (cnt == 2) {
                    break;
                }
                i++;
            }
            System.out.println(ans);
        }
        scanner.close();
    }

    static void cives() {
        for (int i = 2; i * i <= N; i++) {
            if (prime[i]) {
                for (int j = i + i; j <= N; j += i) {
                    prime[j] = false;
                }
            }
        }
    }
}
