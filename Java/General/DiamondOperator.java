import java.util.*;

class DiamondOperator {
    public static void main(String[] args) {
        // diamond operator <>
        HashMap<Integer, Integer> mpp = new HashMap<>();
        mpp.put(5, 3);
        System.out.println(mpp.get(5));
        System.out.println(mpp.containsKey(5));
    }
}

/*
 * The angle brackets <> used after HashMap in Map<Integer, Integer> numMap =
 * new HashMap<>(); denote the use of
 * generics in Java. Generics allow you to specify the types of objects that a
 * collection (like a HashMap,
 * ArrayList, etc.) can hold, providing type safety at compile-time and reducing
 * the risk of ClassCastException
 * at runtime.
 * 
 * new HashMap<>();: Here, the <> is called the diamond operator. Since Java 7,
 * the diamond operator allows you
 * to omit the generic type parameters on the right side if they can be inferred
 * from the left side. This means
 * new HashMap<Integer, Integer>(); is equivalent to new HashMap<>();
 * 
 * Why Use Generics?
 * 
 * 1. Type Safety: Generics ensure that you can only put the specified type of
 * objects into the collection. For
 * example, in this case, the HashMap can only contain Integer keys and Integer
 * values.
 * 
 * 2. Avoids Type Casting: Without generics, you would need to cast the objects
 * retrieved from the collection,
 * which is both cumbersome and error-prone. With generics, you don't need to
 * cast because the type is known at compile-time.
 * 
 * 3. Improves Code Readability: Generics make the code more readable by
 * explicitly stating what types of objects the collection is intended to hold.
 */