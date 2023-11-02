#include <iostream>
using namespace std;

class Queue{
int f,r,n;
int a[10];
public:
    Queue(){
        f = -1;
        r = -1;
        n = 10;
    }

    void insert(int d){
        if(r-f == n-1){
            cout<< "Queue is overflow." << endl;
        } else {
            a[++r] = d;
            if(f == -1){
                f = 0;
            }
        }
    }

    int del(){
        if(f== -1){
            cout<< "Queue is underflow." << endl;
        } else {
            int d =  a[f++];
            if(f > r){
                f = -1;
                r = -1;
            }
        }
    }

    void display(){
        if(f == -1 ){
            cout<< "Queue is underflow." << endl;
        } else {
            for(int i = f; i<=r; i++){
                cout<< a[i] << endl;
            }
        }
    }

};

int main(){
    Queue q;
    q.insert(23);
    q.insert(24);
    q.insert(25);
    q.insert(26);
    q.insert(27);

    q.display();

    return 0;
}