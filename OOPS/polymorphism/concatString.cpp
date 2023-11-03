#include <iostream>
#include <string.h>
using namespace std;

class String{
    char *s;
    public: 
        String(const char *m){
            strcpy(this-> s, m);
        }
        void display(){
            cout << "concatenated string: " << s << endl;
        }
        friend char* operator +(String &a, String &b);
};

char* operator +(String &a, String &b){
    return strcpy(a.s,b.s);
}

int main(){

    String a("krishna");
    String b("prasad");
    a.display();
    b.display();
    cout << a+b << endl;
    return 0;
}