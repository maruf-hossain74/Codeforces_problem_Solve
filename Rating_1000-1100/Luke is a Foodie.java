import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long t = input.nextLong();
        input.nextLine();
        while(t-- > 0) {
            int n = input.nextInt();
            long k = input.nextLong();
            k *= 2;
            int mx = 0, mn = 0, ans = 0; 
            for(int i = 0; i < n; i++) {
                int x = input.nextInt();
                if(i == 0) {
                    mx = x; mn = x;
                }
                else if(x > mx) mx = x;
                else if(x < mn) mn = x;
                if(mx - mn > k) {
                    ans ++;
                    mn = x;
                    mx = x;
                }
            }
            System.out.println(ans);
        }
    }
}
