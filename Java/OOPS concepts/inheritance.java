
class A {
    void speak() {
        System.out.println("class A");
    }
}

class B extends A {
    void speak() {
        System.out.println("class B");
    }
}

class C extends B {
    void speak() {
        super.speak();
        System.out.println("class C");
    }
}

public class inheritance {
    public static void main(String[] args) {
        C obj = new C();
        obj.speak();
    }
}
