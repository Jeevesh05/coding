//package Strings;

public class checkPallindrome {

    public static boolean isPalindrome2(String s) {
        int n = s.length();
        StringBuilder org = new StringBuilder();
        StringBuilder rev = new StringBuilder();
        for (int i = 0; i < n; i++) {
            if (Character.isLetterOrDigit(s.charAt(i))) {
                org.append(s.charAt(i));
            }
            if (Character.isLetterOrDigit(s.charAt(n - i - 1))) {
                rev.append(s.charAt(n - i - 1));
            }
        }
        if (org.toString().toLowerCase().equals(rev.toString().toLowerCase()))
            return true;
        else
            return false;
    }

    public static boolean isPalindrome(String s) {
        if (s.isEmpty()) {
            return true;
        }
        int n = s.length();
        int left = 0;
        int right = n - 1;
        while (left < right) {
            char leftCh = s.charAt(left);
            char rightCh = s.charAt(right);
            if (!Character.isLetterOrDigit(leftCh)) {
                left++;
                continue;
            } else if (!Character.isLetterOrDigit(rightCh)) {
                right--;
                continue;
            } else {
                if (Character.toLowerCase(leftCh) != Character.toLowerCase(rightCh)) {
                    return false;
                }
            }
            left++;
            right--;
        }
        return true;
    }

    public static void main(String[] args) {
        System.out.println(isPalindrome("A man, a plan, a canal: Panama"));
    }
}
