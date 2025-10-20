import java.util.*;

public class Atcoder {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int x, mx = -1, ans = n;
        input.nextLine();
        for(int i = 1; i <= n; i++) {
            x = input.nextInt();
            if(x % m != 0) {
                if((x / m) + 1 >= mx) {
                    ans = i;
                    mx = (x / m) + 1;
                }
            }
            else {
                if((x / m) >= mx) {
                    ans = i;
                    mx = x / m;
                }
            }
        }
        System.out.println(ans);
    }
}
