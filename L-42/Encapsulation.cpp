#include <iostream>
using namespace std;

class Student {  // Encapsulation -> class = data members + functions
    private:
      string name;
      int age;
      int height;

    public:
      int getAge(){
        return this -> age;
      }
};

int main(){
    Student first;
    return 0;
}