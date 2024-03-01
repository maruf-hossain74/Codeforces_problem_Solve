    import java.util.*;
    public class Main {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            int t = input.nextInt();
            input.nextLine();
            while(t-- > 0) {
                int n = input.nextInt();
                int A[] = new int[n];
                int even = 0, odd = 0, same = 0;
                for(int i = 0; i < n; i++) {
                    A[i] = input.nextInt();
                    if(A[i] % 2 == 0) {
                        even++;
                    }
                    else {
                        odd++;
                    }
                }
                if(even > odd) same = even - odd;
                else same = odd - even;
                if(even % 2 == 0) {
                    System.out.println("YES");
                }
                else {
                    Arrays.sort(A);
                    boolean flag = false;
                    for(int i = 1; i < n; i++) {
                        if(A[i] == A[i - 1] + 1) {
                            flag = true;
                            break;
                        }
                    }
                    if(flag) {
                        System.out.println("YES");
                    }
                    else {
                        System.out.println("NO");
                    }
                }
            }
        }
    }
