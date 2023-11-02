#include <iostream>
#include <string.h>
using namespace std;

class DataStructure{
    public:
    int arr[20];      
};

class Stack: public DataStructure{
    int n, top;
    public:
        Stack(){
            n = 20;
            top = -1;
        }

        Stack(int no){
            n = no;
            top = -1;
        }

        void push(int data){
            if(top == n-1){
                cout<< "Stack overflow" << endl;
                return;
            }
            arr[++top] = data;
        }

        int pop(){
            if(top == -1){
                cout<< "Stack underflow" << endl;
                return 0;
            }
            int data;
            data = arr[top--];
            return data;
        }

        void display(){
            if(top == -1){
                cout<< "empty stack" << endl;
                return ;
            }
            for(int i=top; i>-1; i--){
                cout<< arr[i] << endl;
            }
        }

};

int main(){
    Stack s1(5);
    int ch;
    for(int i=0; i<4; i++){

        cout<< "Choose one operations: " << endl;
        cout<< "1. push" << endl;
        cout<< "2. pop" << endl;
        cout<< "3. display" << endl;
        cout<< "4. exit" << endl;
        cin>> ch;
        switch(ch){
            case 1:
                int str;
                cin>> str;
                s1.push(str);
                break;
            case 2:
                cout<< s1.pop();
                break;
            case 3:
                s1.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<< "invalid choices." << endl;
        }
    }


    return 0;
}