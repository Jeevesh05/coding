interface Drawable {
    void draw();

    default void msg() {
        System.out.println("default method");
    }

    static void print() {
        System.out.println("After Java 8 interfaces can have default and static methods as well");
    }
}

class Rectangle implements Drawable {
    public void draw() {
        System.out.println("drawing rectangle");
    }
}

public class interfaceDefault {
    public static void main(String[] args) {
        Drawable d = new Rectangle();
        d.draw();
        d.msg();

    }
}
