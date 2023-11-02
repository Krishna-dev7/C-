#include <iostream>
#include <string.h>
using namespace std;

class Cqueue{
    int f,r,n;
    char a[5][10];
    public:
        Cqueue(){
            f = -1;
            r = -1;
            n = 5;
        }

        void insert(const char* name){
            if(r-f == n-1 || f-r == 1){
                cout<< "Queue overflow" << endl;
            }
            else {
                r = (r+1) % n;
                strcpy(a[r], name);
                if(f == -1){
                    f = 0;
                }
            }
        }

        char* del(){
            if(f == -1){
                cout<< "Queue underflow" << endl;
            }

            else {
                char* data = a[f];
                if( f == r){
                    f = -1;
                    r = -1;
                }
                f = (f+1) % n;
                return data;
            }
        }

        int display(){
            if(f == -1){
                cout<< "Unable to display" << endl;
                return 0;
            }
            if( f > r) {
                for( int i = f; i <= n-1 ; i++){
                    cout<< a[i] << endl;
                }

                for( int i = 0; i <= r; i++){
                    cout<< a[i] << endl;
                }
            } else {
                 for( int i = f; i <= n-1 ; i++){
                    cout<< a[i] << endl;
                }
            }
        }

};

int main(){
    Cqueue c;
    c.insert("krishna");
    c.insert("Mohan");
    c.insert("rakesh");
    c.insert("suraj");
    c.insert("sohan");

    // cout<< c.del() << endl;
    // cout<< c.del() << endl;

    c.del();
    c.del();
    
    c.insert("ankit");
    c.insert("alok");
    // c.insert("hello");

    c.display();

    return 0;
}