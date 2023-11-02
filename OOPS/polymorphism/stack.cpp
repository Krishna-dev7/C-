#include <iostream>
using namespace std;

class Stack{
    int n, top;
    char* ch[10];
    public:
        Stack(){
            n = 5;
            top = -1;
        }

        void initialize(char* ch , int c ){
            for(int i=0; i<c; i++){
                this->ch[i] = ch;
            }
        }

        Stack(int n, char* ch){
            this->n = n;
            this->top = -1;
            
        }

};