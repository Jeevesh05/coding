//Arrays: Elements can be modified, but the reference cannot be changed.

public class PassByValue {
    public static void modifyArray(int[] arr) {
        arr[0] = 10; // Modifies the original array
    }

    public static void reassignArray(int[] arr) {
        arr = new int[] { 1, 2, 3 }; // This does not affect the original array
    }

    public static void main(String[] args) {

        int[] array = { 5, 6, 7 };

        modifyArray(array);
        System.out.println(array[0]); // Prints 10

        reassignArray(array);
        System.out.println(array[0]);
    }
}
