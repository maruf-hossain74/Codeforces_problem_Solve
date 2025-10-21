import java.util.Scanner;

public class Main {
    public static boolean gcd(long a, long b) {
        long r = b % a;
        while(r != 0) {
            b = a;
            a = r;
            r = b % a;
        }
        if(a == 1) return true;
        else return false;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

		long n = input.nextLong();
        double x = Math.sqrt(n);
        for(long i = (long)x ; i >= 1; i--) {
            if(n % i == 0 && gcd(i, n/i)) {
                System.out.println(i + " " + n/i);
                break;
            }
            if(i == 1) {
                System.out.println("1 " + n);
            }
        }
    }
}
