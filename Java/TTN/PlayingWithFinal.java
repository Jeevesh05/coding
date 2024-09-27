import java.util.ArrayList;

public class PlayingWithFinal {
    public static void main(String[] args) {
        // final int arr[] = new int[3];
        // arr[0] = 5;
        // arr[1] = 10;
        // arr[2] = 15;
        // int arr2[] = arr;
        // System.out.println(arr);
        // arr2[0] = 99;
        // System.out.println(arr2);
        // System.out.println(arr[0]);
        // arr2 = new int[] { 11, 22, 33 };

        final ArrayList<Integer> al = new ArrayList<>(1);
        al.add(11);
        al.add(12);
        al.set(0, 55);
        System.out.println(al);
    }
}
