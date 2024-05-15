import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        List<Integer>[] v = new ArrayList[1111];

        // Generating co-prime pairs and storing them in v
        for (int i = 1; i <= 1000; i++) {
            v[i] = new ArrayList<>();
            for (int j = 1; j <= 1000; j++) {
                int a = i, b = j;
                while (b != 0) {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                if (a == 1) {
                    v[i].add(j);
                }
            }
        }

        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();

            int[] a = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                a[i] = scanner.nextInt();
            }

            int[] max_Index = new int[1111];
            Arrays.fill(max_Index, -1);

            for (int i = 1; i <= n; i++) {
                max_Index[a[i]] = i;
            }

            int ans = 0;

            for (int i = 1; i <= 1000; i++) {
                if (max_Index[i] == -1) {
                    continue;
                }

                if (i == 1) {
                    ans = Math.max(ans, 2 * max_Index[i]);
                    continue;
                }

                for (int p : v[i]) {
                    if (max_Index[p] != -1) {
                        ans = Math.max(ans, max_Index[i] + max_Index[p]);
                    }
                }
            }

            if (ans == 0) {
                ans = -1;
            }
            System.out.println(ans);
        }
        scanner.close();
    }
}
