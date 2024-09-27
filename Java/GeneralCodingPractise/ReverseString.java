import java.util.Scanner;

public class ReverseString {
    public static void main(String[] args) {
        // System.out.print("Enter a string to reverse : ");
        // Scanner sc = new Scanner(System.in);
        // String str = sc.nextLine();
        // System.out.println(reverse(str));
        reverse("hello");
    }

    public static String reverse(String str) {
        StringBuilder ans = new StringBuilder();
        // int n = str.length();
        char[] chars = str.toCharArray();
        for (int i = 0; i < chars.length; i++) {
            System.out.println(i + " " + chars[i]);
        }
        for (int i = chars.length - 1; i >= 0; i--) {
            ans.append(chars[i]);
        }
        return ans.toString();
    }

}