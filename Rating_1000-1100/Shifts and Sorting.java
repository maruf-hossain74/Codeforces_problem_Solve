import java.util.*;

public class java {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while(t-- > 0) {
            
            String s = input.next();
            int n = s.length();
            long ans = 0;
            int one = 0;
            for (char cc : s.toCharArray()) {
                if (cc == '0' && one > 0) {
                    ans += one + 1;
                }
                one += cc == '1' ? 1 : 0;
            }
            System.out.println(ans);
        }
    }
}
