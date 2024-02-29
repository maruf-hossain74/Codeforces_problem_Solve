    import java.util.*;
    public class Main {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            int t = input.nextInt();
            input.nextLine();
            while(t-- > 0) {
                String s = input.nextLine();
                boolean flag = true;
                if(s.charAt(0) == '(' && s.charAt(1) == ')' && s.length() == 2) {
                    System.out.println("NO");
                }
                else {
                    System.out.println("YES");
                    for(int i = 1; i < s.length(); i++) {
                        if(s.charAt(i) == s.charAt(i - 1)) {
                            flag = false;
                        }
                    }
                    if(flag) {
                        for(int i = 0 ; i < 2 * s.length(); i++) {
                            if(i < s.length())
                                System.out.print("(");
                            else
                                System.out.print(")");
                        }
                        System.out.println("");
                    }
                    else {
                        for(int i = 0; i < s.length(); i++) {
                                System.out.print("()");
                            }
                            System.out.println("");
                    }
                }
            }
        }
    }
