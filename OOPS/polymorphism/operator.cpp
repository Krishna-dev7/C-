#include <iostream>
using namespace std;

class complexNumber{
    double real;
    double imaginary;
    public:
        complexNumber(double r = 0, double i = 0){
            real = r;
            imaginary = i;
        }

        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }

        friend complexNumber operator + (complexNumber &a, complexNumber &b);
};

complexNumber operator + (complexNumber &a, complexNumber &b){
    complexNumber temp;
    temp.real = a.real + b.real;
    temp.imaginary = a.imaginary + b.imaginary;
    return temp;
}

int main(){
    complexNumber cn1(12,15), cn2(12,20), cn3;
    cn3 = cn1 + cn2;
    cn3.display();

    return 0;
}