public class pattern {

    public static void hollowDiamond(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j == 1 || j == 2 * i - 1)
                    System.out.print("*");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("  ");
            }
            for (int j = 1; j <= 2 * (n - i) - 1; j++) {
                if (j == 1 || j == 2 * (n - i) - 1)
                    System.out.print("*");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }

    public static void hollowHourGlass(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || i == j || i + j - 1 == n) {
                    System.out.print("* ");
                } else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        System.out.println("hello");
        hollowDiamond(5);
    }
}
