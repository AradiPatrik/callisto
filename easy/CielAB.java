import java.util.Scanner;
 
public class CielAB {
 
    public static void main(String[] args) {
 
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
 
        int c = Math.abs(a-b);
        String numString = String.valueOf(c);
        char[] chars = numString.toCharArray();
        char first = chars[0];
 
        if (first!='9'){
            first = '9';
        }else{
            first = '1';
        }
        chars[0] = first;
 
        System.out.println(String.valueOf(chars));
    }
} 
