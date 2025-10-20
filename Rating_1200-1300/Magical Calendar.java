import java.util.Scanner;
public class shape{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();

        while(t!=0)
        {
            long ans;
            long n = input.nextLong();
            long x = input.nextLong();
            if(n<=x)
                ans = ((n * (n-1))/2) + 1;
            else
                ans = (x * (x + 1)) / 2;
            System.out.println(ans);
            t--;
        }
        
    }
}
