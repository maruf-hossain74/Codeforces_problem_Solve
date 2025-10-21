import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		input.nextLine();
		while(t-- > 0) {
			long n = input.nextLong();
			long k = input.nextLong();

			long x;
			x = n/k;

			if(n % k != 0) x++;

			long mx = x * k;

			if(mx%n == 0)
				System.out.println(mx / n);
			else
				System.out.println((mx / n) + 1);
		}
		
		
    }
}
