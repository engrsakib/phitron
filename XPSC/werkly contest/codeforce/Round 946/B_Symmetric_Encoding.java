import java.util.*;

public class B_Symmetric_Encoding {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline character after reading t
        
        while (t-- > 0) {
            int n = scanner.nextInt();
            scanner.nextLine(); // Consume newline character after reading n
            String str = scanner.nextLine();

            HashSet<Character> set = new HashSet<>();
            for (char ch : str.toCharArray()) {
                set.add(ch);
            }

            StringBuilder str2 = new StringBuilder();
            for (Character ch : set) {
                str2.append(ch);
            }

            StringBuilder str3 = new StringBuilder(str);

            HashMap<Character, Character> map = new HashMap<>();
            int size = str2.length();
            for (int j = 0; j < size; j++) {
                map.put(str2.charAt(j), str2.charAt(size - 1 - j));
            }

            for (int k = 0; k < n; k++) {
                char ch = str.charAt(k);
                if (map.containsKey(ch)) {
                    str3.setCharAt(k, map.get(ch));
                }
            }

            System.out.println(str3);
        }

        scanner.close();
    }
}
