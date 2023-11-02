#include <iostream>
using namespace std;
class bus {
    char name[20];
    static int busCount;
    public:
        bus(){
            cin>>name;
            cout<<name<<endl;
        }
        static void staticCount(){
            cout<<busCount<<endl;
        }

};
int bus::busCount = 12;

int main(){
    bus b1;
    bus::staticCount();
    return 0;
}