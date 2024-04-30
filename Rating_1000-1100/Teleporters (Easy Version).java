import java.util.*;

public class java {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        int t = input.nextInt();
        while(t-- > 0) {
            int x;
            int n = input.nextInt();
            int k = input.nextInt();
            ArrayList<Integer> A = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                x = input.nextInt();
                A.add(x+i);
            }
            Collections.sort(A);
            long sum = 0, ans = 0;
            for(Integer it: A) {
                sum += it;
                if(sum > k) break;
                else ans++;
            }
            System.out.println(ans);
        }
    }
}
