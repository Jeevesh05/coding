#include<iostream>
using namespace std;


class Animal {

    public:
    int age;
    int weight;
    int common;

    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class Human {
    public:
    string color;
    int common;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

//Multiple Inheritance
class Hybrid: public Animal, public Human {

};


int main() {

    Hybrid obj1;
    obj1.speak();
    obj1.bark();
    //obj1.common;
    //ambigous
    //use scope operator
    obj1.Animal::common;

    return 0;
}