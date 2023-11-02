#include <iostream>
using namespace std;
class Parent{
public: 
    void display(){
        cout<< "I am from parent class" << endl;
    }
};
class child: public Parent{
public: 
    void display(){
        cout<< "I am from child class" << endl;
    }
};

int main(){
    child c;
    c.display();

    return 0;
}