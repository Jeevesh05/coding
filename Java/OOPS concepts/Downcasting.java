class Parent {
    void show() {
        System.out.println("Parent");
    }

    void showParent() {
        System.out.println("exclusive method of Parent");
    }
}

class Child extends Parent {
    void show() {
        System.out.println("child");
    }

    void showChild() {
        System.out.println("exclusive method of child");
    }
}

public class Downcasting {
    public static void main(String[] args) {
        Parent obj1 = new Child();
        obj1.show();
        // undefined for parent class object
        // obj1.showChild();

        // instaceof operator will check wheather obj1 is refereing to child class or
        // not
        if (obj1 instanceof Child) {
            // Downcasting
            Child obj2 = (Child) obj1;
            obj2.showChild();
        }
    }
}
