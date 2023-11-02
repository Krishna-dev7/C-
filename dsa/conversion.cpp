#include <iostream>
#include <string.h>
using namespace std;

class Stack{
int n, top;
char s[50];
public:
    Stack(){
        n = 50;
        top = -1;
    }

    void push(char data){
        if(top == n-1){
            cout<< "Stack overflow." << endl;
        }
        else{
            s[++top] = data;
        }
    }

    char pop(){
        if(top == -1){
            cout<< "Stack underflow." << endl;
        }
        else {
            char data = s[top--];
            return data;
        }
    }

    char peep(){
        char data = s[top];
        return data;
    }

    void display(){
        if(top == -1){
            cout<< "Stack underflow." << endl;
        } else {
            for(int i=top; i>=0; i--){
                cout<< s[i] << endl;
            }
        } 
    }
};


int main(){
Stack s;
int j = 0;
char in[50], pre[50], m;
cout<< "Enter your infix string: " << endl;
cin>> in;
int len = strlen(in);
strrev(in);
s.push('|');

for(int i=0; i<len; i++){
    m = in[i];
    switch(m){
        case ')':
            s.push(m);
            break;
        case '(':
            while(s.peep() != ')'){
                pre[j++] = s.pop();
            }
            s.pop();
            break;
        case '^':
            s.push(m);
            break;
        case '*':
        case '/':
            while(s.peep() == '^' ){
                pre[j++] = s.pop();
            }
            s.push(m);
            break;
        case '+':
        case '-':
            while(s.peep() == '*' || s.peep() == '/' || s.peep() == '^'){
                pre[j++] = s.pop();
            }
            s.push(m);
            break;
        default:
            pre[j++] = m;
    }
}

while(s.peep() != '|'){
    pre[j++] = s.pop();
}

cout<< strrev(pre) << endl;

return 0;
}