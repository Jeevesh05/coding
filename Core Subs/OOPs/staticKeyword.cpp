/* concepts covered:
    static:
        variable
        function

    HW : const,objet creation,data member useage
    functions
    initialisation list
*/
#include<iostream>
#include <string.h>
using namespace std;

class Hero{
    private:
        int health;
    public:
        char *name;
        char level;
        static int timeToComplete;
        

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
        
        //char *ch = new char[strlen(temp.name)+1];
        //strcpy(ch,temp.name);
        //this->name = ch; 
        this->name = name;
        this->level = temp.level;
        this->health = temp.health;
    }

    void print(){
        cout<<endl;
        cout << "[ Name = "<< this->name<<" ,";
        cout << " health = "<< this->health<<" ,";
        cout << " level = "<< this->level <<" ] ";
        cout<< endl;
    }

    int getHealth(){
        return health;
    }
    void setHealth(int health){
       this -> health = health;
    }
   
    void setLevel(char level){
       this -> level = level;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        cout << timeToComplete<<endl;
    }

    ~Hero(){
        cout<<"desctructor called"<<endl;
    }
};
//:: scope resolution operator
//datatype className::staticVariable = value
int Hero::timeToComplete = 5;

int main(){
//     Hero hero1;
//to call static variables,object creation is not necessary
//     cout<< Hero::timeToComplete <<endl;
//static var belongs to class and not objects. 
//Although you can call static Variable using objects but it is not recommanded


//static functions
    /*
      this keyword is not used
      can only access static variables  
    */
    cout << Hero::random() <<endl;
    return 0;
}