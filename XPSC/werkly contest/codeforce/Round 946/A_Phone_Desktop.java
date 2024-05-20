import java.util.Scanner;

public class A_Phone_Desktop {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            long x = scanner.nextLong();
            long y = scanner.nextLong();

            long rr = Math.max(0, x - ((((y + 1) / 2) * 15) - y * 4));

            System.out.println(((y + 1) / 2) + ((rr + 14) / 15));
        }

        scanner.close();
    }
}
