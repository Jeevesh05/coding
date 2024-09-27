/*
 * Yes,you can overload static methods. Overloading refers to defining multiple methods with the same name but
 *  different parameter lists within the same class.Since method overloading is determined at compile-time
 *  (based on the method signatures), it applies to both static and instance methods.


No, you cannot override static methods. Static methods belong to the class, not to instances of the class,
 and method overriding depends on the runtime type of the object (polymorphism). Since static methods are 
 resolved at compile-time and are not associated with any instance, they cannot participate in polymorphism.
If you declare a static method with the same signature in a subclass, it is not considered overriding but 
rather method hiding.
 */

class Parent {
    static void display() {
        System.out.println("Static method in Parent");
    }
}

class Child extends Parent {
    static void display() { // This is not overriding; it's method hiding
        System.out.println("Static method in Child");
    }
}

public class PolymorphismOnStaticMethods {
    public static void main(String[] args) {
        // Parent obj = new Child();
        // Parent.display();
    }
}
