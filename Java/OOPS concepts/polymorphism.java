class animal {
    int age;

    public void speak() {
        System.out.println("Animal speaks");
        System.out.println("age of animal " + age);
    }

    animal() {
        System.out.println("constructor of animal class");
        // this.age = age;
    }
}

class dog extends animal {
    int health;
    int age;

    dog(int age, int health) {

        System.out.println("constructor of dog is called");
        this.health = health;
    }

    public void speak() {
        System.out.println("dog speaked");
    }

    // method overloading
    public void display(int num1, float num2) {
        System.out.println("1st method");
        System.out.println("the twp nums are " + num1 + " and " + num2);
    }

    public void display(float num1, int num2) {
        System.out.println("2nd method");
        System.out.println("the two nums are " + num1 + " and " + num2);
    }
}

public class polymorphism {
    public static void main(String[] args) {
        // dog obj = new dog(20, 80);
        // obj.speak();
        // obj.age = 5;
        // System.out.println(obj.age);
        // method overloading
        // obj.display(10, 5.50f);
        // obj.display(5.5f, 20);
        animal obj = new dog(2, 5);
        obj.speak();

    }
}
