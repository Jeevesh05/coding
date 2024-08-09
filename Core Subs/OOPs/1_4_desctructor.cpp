/* concepts covered:
    destructor

    HW : const,objet creation,data member useage
    functions
    initialisation list
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

    ~Hero(){
        cout<<"desctructor called"<<endl;
    }
};

int main(){
    Hero hero1;
    Hero *hero2 = new Hero();

//destructor for statically allocated objects is called automatically
// for dynamically allocated objects use need to call it manuallly

    delete hero2; // or delete(hero2);
//as constructor is called only once at the time of creation,destructor will also be called once
    
    //delete hero1;
    //wrong,uncomment to see reason
    return 0;
}