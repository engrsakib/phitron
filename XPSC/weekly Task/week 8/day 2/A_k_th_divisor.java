import java.util.*;

public class A_k_th_divisor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long t = 1;
        while (t-- > 0) {
            long n = scanner.nextLong();
            long k = scanner.nextLong();
            ArrayList<Long> div = new ArrayList<>();
            for (long i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    div.add(i);
                    if ((n / i) != i) {
                        div.add(n / i);
                    }
                }
            }
            Collections.sort(div);
            if (div.size() < k) {
                System.out.println(-1);
                return;
            }
            System.out.println(div.get((int) k - 1));
        }
    }
}
