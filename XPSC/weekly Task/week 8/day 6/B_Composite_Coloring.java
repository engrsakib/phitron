import java.util.*;

public class B_Composite_Coloring {
    static int[] prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] v = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = scanner.nextInt();
            }

            int[] ans = new int[n];
            Arrays.fill(ans, -1);

            int cur_col = 1;
            for (int p : prime) {
                boolean flag = false;
                for (int i = 0; i < n; i++) {
                    if (ans[i] != -1) {
                        continue;
                    }
                    if (v[i] % p != 0) {
                        continue;
                    }
                    flag = true;
                    ans[i] = cur_col;
                }
                if (flag) {
                    cur_col++;
                }
            }
            System.out.println(cur_col - 1);
            for (int aa : ans) {
                System.out.print(aa + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}
