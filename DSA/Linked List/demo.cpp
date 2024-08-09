#include <bits/stdc++.h>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int value) {
        this->value = value; // Assigning value to the member variable using "this"
    }

    void printValue() {
        cout << "Value: " << this->value << endl; // Accessing member variable using "this"
    }

    MyClass* getObject() {
        return this; // Returning the address of the current object
    }
};

int main() {
    MyClass obj1(10);

    obj1.printValue(); // Output: Value: 10

    // Accessing member function of the current object using "this"
    cout << "Address of obj1: " << obj1.getObject() << endl;

    return 0;
}
