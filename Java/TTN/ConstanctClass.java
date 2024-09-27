final class ConstClass {
    char num;

    ConstClass() {
        System.out.println("Initialised nothing");
    }

    ConstClass(char num) {
        this.num = num;
        System.out.println("num initialised");
    }

    void ConstClass() {
        System.out.println("a mthod whose name is same as class but is not a const");
    }
}

// class inheritingConstClass extends ConstClass {

// }

public class ConstanctClass {
    public static void main(String[] args) {
        System.out.println("working");
        // ConstClass obj = new ConstClass(10);
        // obj.ConstClass();
        ConstClass obj = new ConstClass();
        System.out.println(obj.num); // nothing is printed in case of char num;
    }
}
