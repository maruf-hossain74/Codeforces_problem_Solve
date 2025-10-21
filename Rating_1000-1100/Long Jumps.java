import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t-- > 0){
            int n = input.nextInt();
            int[] a = new int[n], dp = new int[n];
            for(int i=0;i<n;i++)
                a[i] = input.nextInt();
            int ans = 0;
            for(int i=n-1;i>=0;i--){
                dp[i] = a[i] + ((i+a[i]<n)?dp[i+a[i]]:0);
                ans = Math.max(dp[i], ans);
            }
 
            System.out.println(ans);
        }
    }
}
