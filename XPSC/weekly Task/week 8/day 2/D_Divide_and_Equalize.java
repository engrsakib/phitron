import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class D_Divide_and_Equalize {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
            }

            Map<Long, Long> cnt = new HashMap<>();
            for (int i = 0; i < n; i++) {
                long num = a[i];
                long j = 2;
                while (j * j <= num) {
                    if (num % j == 0) {
                        while (num % j == 0) {
                            cnt.put(j, cnt.getOrDefault(j, 0L) + 1);
                            num /= j;
                        }
                    }
                    j++;
                }
                if (num > 1) {
                    cnt.put(num, cnt.getOrDefault(num, 0L) + 1);
                }
            }

            boolean flag = true;
            for (long val : cnt.values()) {
                if (val % n != 0) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        scanner.close();
    }
}
