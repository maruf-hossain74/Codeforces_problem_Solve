import java.util.*;

public class java{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        while (t-- > 0) {
            int n = input.nextInt();
            int A[] = new int[n];
            int ans = 2147483647;
            for(int i = 0; i < n; i++) {
                A[i] = input.nextInt();
                if(A[i] != i) {
                    ans &= i;
                }
            }
            System.out.println(ans);
        }
    }
}
