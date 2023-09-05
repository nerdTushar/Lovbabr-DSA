#include <iostream>
#include <string.h>
using namespace std;

class Hero {
    // properties
    private:
    int health;
    public:
    char level;
    char *name;
    static int timeToComplete;
    
    // default constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this -> health = health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero & temp){
        cout<<"Copy constructor called"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this -> name = ch;
        this ->  health = temp.health;
        this -> level = temp.level;
    }

    // behaviour
    void print(){
        cout<<"Name : "<<this -> name<<endl;
        cout<<"Health : "<<this -> health<<endl;
        cout<<"Level : "<<this -> level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this -> name,name);
    }

    static int random(){
        return timeToComplete;
    }

    // destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

int Hero::timeToComplete = 5;

int main(){

    // // creation of object
    // Hero ramesh;
    // cout<<"Size of ramesh : "<<sizeof(ramesh)<<endl;
    // ramesh.setHealth(70);      // -> use setter
    // // ramesh.health = 70;
    // ramesh.level = 'A';
    // cout<<"Health is : "<<ramesh.getHealth()<<endl;   // -> use getter
    // // cout<<"Health is : "<<ramesh.health<<endl;
    // cout<<"Level is : "<<ramesh.level<<endl;

    // // cout<<"Size : "<<sizeof(h1)<<endl;

    // // static allocation
    // Hero a;
    // a.setHealth(70);
    // a.setLevel('A');
    // cout<<"Level is : "<<a.level<<endl;
    // cout<<"Health is : "<<a.getHealth()<<endl;

    // // dynamically
    // Hero *b = new Hero;
    // b->setHealth(80);
    // b->setLevel('B');
    // cout<<"Level is : "<<(*b).level<<endl;
    // cout<<"Health is : "<<(*b).getHealth()<<endl;

    // cout<<"Level is : "<<b->level<<endl;
    // cout<<"Health is : "<<b->getHealth()<<endl;

    // // object created statically
    // // cout<<"Hii"<<endl;
    // Hero ramesh(10);
    // // cout<<"Address of ramesh : "<<&ramesh<<endl;
    // ramesh.print();
    // // cout<<"Bye"<<endl;

    // // dynamically
    // Hero *h = new Hero(11);
    // // cout<<"Address of h : "<<h<<endl;
    // h->print();

    // Hero temp(22,'B');
    // temp.print();

    // Hero S(70,'C');
    // S.print();

    // // copy constructor
    // Hero R(S);
    // R.print();

    // Hero hero1;
    // hero1.setHealth(70);
    // hero1.setLevel('D');
    // char name[7] = "Babbar";
    // hero1.setName(name);
    // // hero1.print();

    // // use default copy constructor
    // Hero hero2(hero1);
    // // Hero hero2 = hero1;
    // // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();
    // hero2.print();

    // hero1 = hero2; // copy assignment operator

    // hero1.print();
    // hero2.print();

    // // static
    // Hero a;
    
    // // dynamic
    // Hero *b = new Hero();
    // // manually destructor call
    // delete b;

    // static member access
    // cout<< Hero::timeToComplete <<endl;
    cout<< Hero::random()<<endl;

    // Hero a;
    // cout<< a.timeToComplete <<endl; // not recommended as like this

    // Hero b;
    // b.timeToComplete = 10;
    // cout<< a.timeToComplete <<endl;
    // cout<< b.timeToComplete <<endl;
    return 0;
}