/*
compile time polymorphism(or static polymorphism) consists of 2 types:
    operator overloading
    function overloading
*/
#include<iostream>
using namespace std;

class A {
/*
sayHello() function is overloaded.
for a function to be overloaded,function signature should be different
1. change no. of arguments
2. change data type of arguments 

not valid if
1. return type is changed
*/


    public:
    void sayHello() {
        cout << "Hello Love Babbar" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Love Babbar" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};


class B {
    public:
    int a;
    int b;
/*
operator overloading(changing the defination of operators)
+ op just prints a statemnt similarly for ()
*/
    void operator+ (B obj) {
        cout<< this->a + obj.a<<endl;
       //cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

int main() {

    B obj1, obj2;

    obj1.a = 3;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
}