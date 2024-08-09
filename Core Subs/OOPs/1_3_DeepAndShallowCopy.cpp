/* concepts covered:
    deep and shallow copy
    copy assignment operator
*/
#include<iostream>
//#include <stdio.h>
#include <string.h>
using namespace std;

class Hero{
    private:
        int health;
    public:
//using a char array like name[100] is not preferred as it uses stack memory which is limited
//so dynamically allocate it to use heap memory
//u get a pointer pointing to char array to use
        char *name;
        //int money;
        char level;
        

    // non parameterised conc
    Hero(){
        cout<<"user defined non parameterised conc called"<<endl;
        name = new char[100];
    }

    //parameterised conc
    Hero(int money,char level){
        //this->money = money;
        this->level = level;
    }
    Hero(int health,int money,char level){
        //this->money = money;
        this->level = level;
        this->health = health;
    }

    //user defined copy constructor
    Hero(Hero &temp){
        cout<<"\nuser defined copy constructor"<<endl;//just to show,our copy C is called
        //this->money = temp.money;
        
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch; 
        this->name = name;
        this->level = temp.level;
        this->health = temp.health;
    }

    void print(){
        cout<<endl;
        cout << "[ Name = "<< this->name<<" ,";
        cout << " health = "<< this->health<<" ,";
        cout << " level = "<< this->level <<" ] ";
        //cout << " money = "<< this->money <<"]";
        cout<< endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int health){
       this -> health = health;
    }
    // void setMoney(int money){
    //    this -> money = money;
    // }
    void setLevel(char level){
       this -> level = level;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main(){
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7]= "babbar";
    hero1.setName(name);
    hero1.print();

    //use default cons

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    //hero1.print();

   // hero2.print();
//default copy constructor does shallow copy
//shallow copy means same memory is accessed by 2 variables
//deep copy create a new copy
//user defined copy C make deep copy


    hero2= hero1;
    hero1.print();
    hero2.print();
    //bool var = hero1 == hero2;



    return 0;
}