import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int k = input.nextInt();
        ArrayList<Integer> A = new ArrayList<>();
        for(int i = 0; i < n; i++) {
            int x = input.nextInt();
            A.add(x);
        }
        
        Collections.sort(A);
        int xx = n, ans = 0, j  = 1;
        while(xx > 0) {
            int mem = k / A.get(n-j);
            mem++;
            xx -= mem;
            if(xx >= 0) ans++;
            j++;
            
        }
        System.out.println(ans);
    }
}
