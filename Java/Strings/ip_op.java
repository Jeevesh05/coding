import java.util.Scanner;

public class ip_op {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("What is your name,age,marks and Address ");
        String name = sc.nextLine();
        int age = sc.nextInt();
        int marks = sc.nextInt();
        // Consuming the Newline Character: When you use nextInt(), it only consumes the
        // integer, leaving the newline character (\n) in the input buffer
        sc.nextLine(); // this will get the \n new line character
        String address = sc.nextLine();
        System.out.printf("Hello, %s your age is %d, marks are %d and address is %s",
                name, age, marks, address);
        sc.close();
    }
}
