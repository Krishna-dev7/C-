#include <iostream>
using namespace std;

class B{
    public:
        float b;
        B(){
            b =  15;
        }
};

class A{
    public:
        int a;
        A(){
            a = 10;
        }
        A(B b){
            a = b.b;
        }
};


int main(){
    A a;
    B b;
    a = b;
    cout << a.a << endl;
    return 0;
}