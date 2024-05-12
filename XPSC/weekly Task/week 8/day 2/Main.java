import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = 1;
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = scanner.nextLong();
                long num = (long) Math.sqrt(a[i]);
                boolean isPrime = true;
                if (num == 1) {
                    isPrime = false;
                } else {
                    for (long j = 2; j * j <= num; j++) {
                        if (num % j == 0) {
                            isPrime = false;
                            break;
                        }
                    }
                }
                if (isPrime && num * num == a[i]) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
        scanner.close();
    }
}
