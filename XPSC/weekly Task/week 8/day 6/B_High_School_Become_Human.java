import java.util.Scanner;

public class B_High_School_Become_Human {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // _Created :  16 May 2024 ||   13:55:02
        // _File    :  B_High_School_Become_Human.java
        // Writer    :  Md. Nazmus Sakib(engrsakib)
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        // اللهم صل على سيدنا محمدن النبى الامى وآله وسلم
        
        int t = 1;
        
        while (t-- > 0) {
            long a = sc.nextLong();
            long b = sc.nextLong();
            
            double l = b * Math.log(a);
            double r = a * Math.log(b);
            
            if (l < r) {
                System.out.println('<');
            } else if (l > r) {
                System.out.println('>');
            } else {
                System.out.println('=');
            }
        }
        
        sc.close();
    }
}
