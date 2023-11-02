#include <iostream>
#include <string.h>
using namespace std;

class L1{
    int rollno;
    char name[30];
    public:
        L1(){
            rollno = 0;
            strcpy(name, "");
        }
        L1(int r, const char* a){
            this->rollno = r;
            strcpy(name, a);
        }

        void display1(){
            cout<< "roll no: " << rollno << endl;
            cout<< "Name: " << name << endl;
        }

};

class L2: public L1{
    int m1,m2,m3;
    public:
        L2(){
            m1 = 0;
            m2 = 0;
            m3 = 0;
        }

        L2(int m1, int m2, int m3, int r, const char a[]): L1(r, a){
            this->m1 = m1;
            this->m2 = m2;
            this->m3 = m3;
        }

        void display2(){
            cout<< m1 << '\t' << m2 << '\t' << m3 << endl;
        }
};

class L3: public L2{
    int total;
    float per;
    public:
        L3(int r, const char a[], int m1, int m2, int m3): L2( m1,  m2,  m3, r, a){
            total = m1 + m2 + m3;
            per = total/3;
        }

        void display(){
            display1();
            display2();
            cout<< "total: "<< total <<endl;
            cout<< "percentage: "<< per << endl;
        }
};

int main(){
    L3 student1(1, "krishna", 99, 99, 99);
    L3 student2(2, "suraj", 89, 89, 89);
    L3 student3(3, "rohit", 89, 89, 89);
    student1.display();
    cout<< endl;
    student2.display();
    cout<< endl;
    student3.display();

    return 0;
}