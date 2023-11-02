#include <iostream>
using namespace std;

//source class
class invent1{
    int code,item;
    float price;
    public:
        invent1(int x = 0, int y = 0, float z = 0){
            code = x;
            item = y;
            price = z;
        }

        int getcode(){
            return code;
        }
        int getitem(){
            return item;
        }

        float getvalue(){
            return item * price;
        }

        operator float(){
            return getvalue();
        }

};

//destination class
class invent2{
    int code;
    float value;
    public:
        invent2(){
            code = 0;
            value = 0;
        }

        invent2(invent1 p){
            code = p.getcode();
            value = p.getvalue();
        }

        void display(){
            cout<<"invent2's value: "<<value<<endl;
            cout<<"invent2's code: "<<code<<endl;
        }

        operator float();
};

invent2::operator float(){
    return value;
}

int main(){
    invent1 i1(1, 10, 100.0);
    invent2 i2;
    float totalValue;
    totalValue = i1; //implicit type casting
    cout<<"totalValue:"<<totalValue<<endl;

    i2 = i1;
    i2.display();

    return 0;
}