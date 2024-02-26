import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
			int n = input.nextInt();
			int x1 = input.nextInt();
			int y1 = input.nextInt();
			int x2 = input.nextInt();
			int y2 = input.nextInt();
			int x = input.nextInt();
			int y = input.nextInt();
			boolean ans = false;
			if(x1 < x2 && y1 < y2 && x1 < x && y1 < y) ans = true;
			if(x1 > x2 && y1 > y2 && x1 > x && y1 > y) ans = true;
			if(x1 < x2 && y1 > y2 && x1 < x && y1 > y) ans = true;
			if(x1 > x2 && y1 < y2 && x1 > x && y1 < y) ans = true;
			if(ans) {
				System.out.println("YES");
			}
			else {
				System.out.println("NO");
			}
    }
}
