import java.util.*;
public class Main {
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long t = input.nextLong();
        input.nextLine();
        while(t-- > 0) {
            int n = input.nextInt();
            int m = input.nextInt();
            int k = input.nextInt();
            int x = m / (k+1);
            int r = m % (k+1);
            for(int i = 0; i < k; i++) {
                if(r-- > 0) {
                    for(int j = 0; j <= x; j++) System.out.print('R');
                    System.out.print('B');
                }
                else {
                    for(int j = 0; j < x; j++) System.out.print('R');
                    System.out.print('B');
                }
            }
            if(r-- > 0) {
                for(int j = 0; j <= x; j++) System.out.print('R');
            }
            else {
                for(int j = 0; j < x; j++) System.out.print('R');
            }
            System.out.println();
        }
    }
}
