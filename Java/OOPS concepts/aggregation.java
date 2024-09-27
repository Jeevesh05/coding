class Address {
    String city, state, country;

    Address(String city, String state, String country) {
        this.city = city;
        this.state = state;
        this.country = country;
    }
}

class Emp {
    String name;
    Address add;

    Emp(String name, Address add) {
        this.name = name;
        this.add = add;
    }

    void display() {
        System.out.println(" name " + name);
        System.out.println("Address " + add.city + " " + add.state + " " + add.country);
    }
}

public class aggregation {
    public static void main(String[] args) {
        Address Aobj = new Address("rohini", "delhi", "india");
        Emp obj = new Emp("raj", Aobj);
        obj.display();
    }
}
