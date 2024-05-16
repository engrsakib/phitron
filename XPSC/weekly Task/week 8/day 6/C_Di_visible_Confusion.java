import java.util.Scanner;

public class C_Di_visible_Confusion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // _Created :  16 May 2024 ||   3:55:02
        // _File    :  C_Di_visible_Confusion.java
        // Writer    :  Md. Nazmus Sakib(engrsakib)
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
        
        
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] arr = new int[n + 3];
            boolean ans = false;
            for (int i = 1; i <= n; i++) {
                arr[i] = scanner.nextInt();
            }
            
            int i = 1;
            while (i <= n) {
                boolean right = false;
                for (int j = 2; j <= i + 1; j++) {
                    if (arr[i] % j != 0) {
                        right = true;
                        break;
                    }
                }

                if (!right) {
                    ans = true;
                    break;
                }
                i++;
            }

            if (!ans) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
        scanner.close();
    }
}
