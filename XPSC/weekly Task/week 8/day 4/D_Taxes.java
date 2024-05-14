import java.util.Scanner;

public class D_Taxes {

    public static boolean isPrime(long n) {
        if (n <= 1) {
            return false;
        }
        for (long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        

        while (scanner.hasNextLong()) {
            long n = scanner.nextLong();

            if (isPrime(n)) {
                System.out.println(1);
            } else if (n % 2 == 0) {
                System.out.println(2);
            } else {
                if (isPrime(n - 2)) {
                    System.out.println(2);
                } else {
                    System.out.println(3);
                }
            }
        }

        scanner.close();
    }
}
