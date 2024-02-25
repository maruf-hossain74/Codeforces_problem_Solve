import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
			int n = input.nextInt();
			int s = input.nextInt();
			int A[] = new int[n];
			int B[] = new int[n];
			boolean ans = true, check = false;
			for(int i = 0; i < n; i++) {
				A[i] = input.nextInt();
				if(i == 0 && A[i] == 0) {
					ans = false;
				}
				if(i == s - 1 && A[i] == 0) {
					check = true;
				}
			}
			for(int i = 0; i < n; i++) {
				B[i] = input.nextInt();
				if(check && i == s - 1 && B[i] == 0) {
					ans = false;
					check = false;
				}
				if(check && i + 1 > s) {
					if( B[i] == A[i] && A[i] == 1) {
						check = false;
					}
				}
			}
			if(ans && !check) {
				System.out.println("YES");
			}
			else {
				System.out.println("NO");
			}
    }
}
