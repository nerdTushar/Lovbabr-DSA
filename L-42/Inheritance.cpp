#include <iostream>
using namespace std;

class Human {
    protected:
      int height;
      int weight;
      int age;

      int getAge(){
        return this -> age;
      }
      void setWeight(int w){
        this -> weight = w;
      }
};

class Male : public Human {
    public:
      string color;

      void sleep(){
        cout<<"Male sleeping"<<endl;
      }

      int getHeight(){
        return this -> height;
      }
};

int main(){
    // Male object1;
    // cout<< object1.height <<endl;
    // cout<< object1.weight <<endl;
    // cout<< object1.age <<endl;
    // cout<< object1.color <<endl;
    // object1.setWeight(75);
    // cout<< object1.weight <<endl;
    // object1.sleep();

    Male m1;
    cout<< m1.getHeight() <<endl;
    return 0;
}