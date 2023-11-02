#include <iostream>
#include <string>
using namespace std;

class name{
    char *n;
    public:
        name(char *m){
            n = m;
        }

        char* getname(){
            return n;
        }
};

int main(){
    char *p;
    name *q = new name();

    cout<<q->getname();
    return 0;
}