public class StringContainsVowels {
    public static void main(String[] args) {
        System.out.println(stringContainsVowels("Hello")); // true
        System.out.println(stringContainsVowels("TV")); // false
    }

    public static boolean stringContainsVowels(String input) {
        String vowels = "aeiouAEIOU"; // Handle both uppercase and lowercase vowels
        for (int i = 0; i < input.length(); i++) {
            if (vowels.indexOf(input.charAt(i)) != -1) {
                return true; // Vowel found
            }
        }
        return false;
    }
}
