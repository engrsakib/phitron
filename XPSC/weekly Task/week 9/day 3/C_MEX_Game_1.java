import java.util.Scanner;

public class C_MEX_Game_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();

            int[] freq = new int[n + 1];

            for (int i = 0; i < n; i++) {
                int x = sc.nextInt();
                freq[x]++;
            }

            int cnt = 0;

            int i = 0;
            while (i <= n) {
                if (freq[i] == 1) {
                    cnt++;
                }
                if (cnt == 2 || freq[i] == 0) {
                    System.out.println(i);
                    break;
                }
                i++;
            }
        }

        sc.close();
    }
}
