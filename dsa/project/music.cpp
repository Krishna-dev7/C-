#include <iostream>
#include <string.h>
using namespace std;

class Queue{
int r, f,n;
char name[5][10];
public:
    Queue(){
        f = -1;
        r = -1;
        n = 5;
    }

    void insert(const char* data){
        if(r== n-1){
            cout<< "Queue is overflow" << endl;
        }
        else {
            strcpy(name[++r], data);
            if(f == -1)
                f= 0;
        }
    }

    char* del(){
        if( f == -1){
            cout<< "Queue is underflow" << endl;
        }
        else {
            char * data = name[f];
            if(f-r == 0){
                f = -1;
                r = -1;
            } else {
                f++;
            }

            return data;
        }
    }

    friend void display(Queue o);
};

void display(Queue o){
    for(int i=o.f; i<=o.r; i++){
        cout<< o.name[i] << endl;
    }
}

int main(){
    Queue q;
    q.insert("Suraj");
    q.insert("rakesh");
    q.insert("manish");
    display(q);

    return 0;
}