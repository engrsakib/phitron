import java.util.*;

public class C_Turtle_Fingers_Count_the_Values_of_k {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // _Created :  16 May 2024 ||   15:19:21
        // _File    :  C_Turtle_Fingers_Count_the_Values_of_k.cpp
        // Writer    :  Md. Nazmus Sakib(engrsakib)
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
        
        int t = scanner.nextInt();
        while (t-- > 0) {
            long a = scanner.nextLong();
            long b = scanner.nextLong();
            long l = scanner.nextLong();

            long pw = 1;
            Set<Long> st = new HashSet<>();
            long i = 0;
            while (i <= 20) {
                long px = 1;
                long j = 0;
                while (j <= 20) {
                    if (l % (pw * px) == 0) {
                        st.add(l / (pw * px));
                    }
                    px *= b;
                    if (px > l) {
                        break;
                    }
                    j++;
                }
                pw *= a;
                if (pw > l) {
                    break;
                }
                i++;
            }
            System.out.println(st.size());
        }
        
        scanner.close();
    }
}
