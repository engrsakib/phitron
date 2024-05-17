import java.util.Scanner;

public class C_Non_coprime_Split {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            long l = sc.nextLong();
            long r = sc.nextLong();
            long even = 0;

            long i = l;
            while (i <= r) {
                if (i % 2 == 0 && i > 2) {
                    even = i;
                    break;
                }
                i++;
            }

            if (r < 4) {
                System.out.println(-1);
                continue;
            }

            if (r - l == 0 && even == 0) {
                long div = 0;
                for (int j = 3; j * j <= l; j++) {
                    if (l % j == 0) {
                        div = j;
                        break;
                    }
                }
                if (div == 0) {
                    System.out.println(-1);
                } else {
                    System.out.println(div + " " + (l - div));
                }
            } else {
                System.out.println((even - 2) + " 2");
            }
        }

        sc.close();
    }
}
