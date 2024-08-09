#include <iostream>
using namespace std;

class A{
    public:
    int a1 = 5;
    int comm = 1;
    private:
        int pivateMem;
    protected:
        int protectedMem;
};

class B: public A{
    public:
    int a2 = 10;
    int comm = 2;

    int getprotectedMem(){
        return protectedMem;
    }
    int getParent(){
        return a1;
    }
};

class C: public B{
    public:
    int a3 = 15;
    
    // int getParent(){
    //     return a1;
    // }
};

int main(){
    C obj;
    cout << obj.getParent();
    cout <<endl;
    B obj2;
    cout << obj2.getprotectedMem()<< endl;
}