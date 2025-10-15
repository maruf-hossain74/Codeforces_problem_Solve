import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long t = input.nextLong();
        input.nextLine();
        while(t-- > 0) {
            int n = input.nextInt();
            int k = input.nextInt();
            input.nextLine();
            String s = input.nextLine();
            int b = 0;
            int ans = k;
            for(int i = 0; i < n; i++) {
                if(s.charAt(i) == 'W') {
                    b++;
                }
                if(i >= k-1) {
                    if(ans > b) {
                    ans = b;
                    }
                    if(s.charAt(i-k+1) == 'W') {
                        b--;
                    }
                }
                
            }
            System.out.println(ans);
        }
    }
}
