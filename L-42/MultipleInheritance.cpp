#include <iostream>
using namespace std;

class Animal {
    public:
      int age;
      int weight;

      void bark(){
        cout<<"barking"<<endl;
      }
};

class Human {
    public:
      string color;

      void speak(){
        cout<<"speaking"<<endl;
      }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human {

};

int main(){
    Hybrid h;
    h.speak();
    h.bark();
    return 0;
}