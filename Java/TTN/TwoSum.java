import java.util.HashMap;
import java.util.Iterator;

public class TwoSum {
    public static int[] two(int arr[]) {

        return new int[2];
    }

    public static void main(String[] args) {
        // int[] arr1 = new int[2];
        // arr1[0] = 12;
        // arr1[1] = 13;
        // two(arr1);
        HashMap<Integer, Integer> mpp = new HashMap<>();
        mpp.put(2, 10);
        mpp.put(3, 30);
        // set<Integer> keySet = map.keySet();
        Iterator<Integer> it = mpp.keySet().iterator();
        while (it.hasNext()) {
            int key = it.next();
            int value = mpp.get(key);
            System.out.println(key + " -> " + value);
        }
        // System.out.println(mpp.keySet());
    }
}
