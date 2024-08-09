/* concepts covered:
    constructors(default,param,user defined)
    copy constructor
*/
#include<iostream>
using namespace std;

class Hero{
    private:
        int health;
    public:
        int money;
        char level;
        

    // non parameterised conc
    Hero(){
        cout<<"user defined non parameterised conc called"<<endl;
    }

    //parameterised conc
    Hero(int money,char level){
        this->money = money;
        this->level = level;
    }
    Hero(int health,int money,char level){
        this->money = money;
        this->level = level;
        this->health = health;
    }

    //user defined copy constructor
    Hero(Hero &temp){
        cout<<"\nuser defined copy constructor"<<endl;//just to show,our copy C is called
        this->money = temp.money;
        this->level = temp.level;
        this->health = temp.health;
    }

    void print(){
        cout<<endl;
        cout << "[ health = "<< this->health;
        cout << " level = "<< this->level;
        cout << " money = "<< this->money <<"]";
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    int setHealth(int health){
       this -> health = health;
    }
    int setMoney(int money){
       this -> money = money;
    }

};

int main(){
    //Hero mahesh;
    //Hero suresh(5000,'2');
    //suresh.print();
    Hero dharam(100,3000,'A');
    dharam.print();
    //copy constructor called(by default a copy constructor is generated just like constructor)
    Hero copy(dharam);
    copy.print();
    dharam.setMoney(2000);
    dharam.print();
    copy.print();
    

    return 0;
}