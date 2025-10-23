import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long ans = (3*n-2)*(2*n-1)+(n-1);
        System.out.println(ans);
    }
}
