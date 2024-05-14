import java.util.Scanner;

public class A_Maximum_GCD {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while (t-- > 0) {
            long n = scanner.nextLong(); 
            System.out.println(n / 2); 
        }

        scanner.close();
    }
}
