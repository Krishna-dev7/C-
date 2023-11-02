#include <iostream>
using namespace std;
class Parent{
public: 
    virtual void display(){
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
    Parent p;
    p.display();
    c.display();

    return 0;
}