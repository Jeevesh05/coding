/*concepts covered 
    access modifiers
    getters and setters
    static vs dynamic allocation
    constructor(default)
    this keyword
*/
// diff in <> and "" in notes 
#include <iostream>
//#include "student.cpp"
using namespace std;

//size of an empty class is 1 to
class Hero{
    //by default all members are private
    private:
    int health;
    public:
    char name[25];
    char level;
    int money;

    //getters and setters are just functions defined in class so that
    //we can access private members

    int getHealth(){
        return health;
    }

    int setHealth(int health){
        //this is a pointer keyword which points to the current object
        this -> health = health;
    }

};

int main(){
    // raju is an object of class Hero,this is called instatiation of an object
    //this statement calls the default constructor 
    //constructor is a method defined in class(default,user-defined,parameterised)
    //if a constructor is user defined or param in class , then default constructor 
    //is erased from memory and cease to exist
    
    //static creation of object(constructor is invoked implicity )
    Hero raju;


    //dynamic creation of object(constructor is invoked explicity)
    //a pointer of type Hero is created which points to a new object of class Hero
    Hero *bheem = new Hero(); 

    //accessing public members 
    raju.money = 89;
    cout << "money raju have is " << raju.money <<endl;
    
    //accessing private members
    raju.setHealth(70);
    cout << raju.getHealth() << endl;
    //raju.health;  //health is inaccessible 
    

    (*bheem).level = '8';
    //or
    bheem->money = 100;
    cout << bheem->money << endl;

//with static objects u can not use arow operator
//but since dynamically allocated objects are pointers,we can use arrow operator

    return 0;
}