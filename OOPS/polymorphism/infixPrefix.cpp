#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Stack{
    char s[50], pre[50] = {0};
    int n, top;
    public:
        Stack(){
            n = 5;
            top = -1;
        }

        Stack(int no){
            n = no;
            top = -1;
        }

        void push(char a){
            top++;
            this->s[top] = a;
        }

        char pop(){
            char data;
            data = s[top];
            top--;
            return data; 
        }

        char peep(){
            char data;
            data = s[top];
            return data;
        }

};

int main(){
    char infix[50] , pre[50] ;
    int j=0;
    Stack s;

    cout<< "Enter your infix expression: ";
    // cin.ignore();
    cin>>infix;

    int len = strlen(infix);
    strrev(infix);
    // infix[len] = '(';
    s.push('|');
    // len ++;

    for(int i=0; i<len; i++){
        switch(infix[i]){
            case ')':
                s.push(')');
                break;

            case '(':
                while(s.peep() != ')'){
                    pre[j++] = s.pop();
                }
                s.pop();
                break;

            case '^':
                    // pre[j++] = s.pop();
                s.push(infix[i]);
                // pre[j++]= infix[i];
                break;
            
            case '*':
            case '/':
                while(s.peep() == '^' ){
                    pre[j++] = s.pop();
                }
                s.push(infix[i]);
                break;
            
            case '+':
            case '-':
                while(s.peep() == '^' || s.peep() == '*' || s.peep() == '/'){
                        pre[j++] = s.pop();
                    }

                s.push(infix[i]);
                break;

            default:
                pre[j++] = infix[i];
        }
    }

    while(s.peep()!= '|'){
        pre[j++] = s.pop();
    }

    cout<< "Prefix expression: " << strrev(pre);
    return 0;
}