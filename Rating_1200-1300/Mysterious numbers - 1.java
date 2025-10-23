import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long k = input.nextLong();
        long r = 0;
        while(k != 0) {
            long rem = k%10;
            r = (r*10) + rem;
            k /= 10;
        }
        System.out.println(n + r);
    }
}
