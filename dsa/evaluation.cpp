#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Stack{
int n, top;
float s[10];
public: 
    Stack(){
        n = 50;
        top = -1;
    }
    
    void push(float data){
        s[++top] = data;
    }

    float pop(){
            return s[top--];
    }

    float peep(){
        return s[top];
    }

};

int main(){
    Stack s;
    char pre[10];
    int   len;
    float rs, k,a,b;
    cout<< "Enter your prefix expression: " <<endl;
    cin>> pre;
    len = strlen(pre);
    strrev(pre);

    char m;
    for(int i=0; i<len; i++){
        m = pre[i];
        switch(m){
            case '^':
                a = s.pop();
                b = s.pop();
                rs = pow(a,b);
                s.push(rs);
                break;
            case '*':
                a = s.pop();
                b = s.pop();
                rs = (a)*b;
                s.push(rs);
                break;
            case '/':
                a = s.pop();
                b = s.pop();
                rs = (a)/b;
                s.push(rs);
                break;
            case '+':
                a = s.pop();
                b = s.pop();
                rs = (b)+a;
                s.push(rs);
                break;
            case '-':
                a = s.pop();
                b = s.pop();
                rs = (a)-b;
                s.push(rs);
                break;
            default:
                k = m;
                s.push(k-48);
        }
    }

    cout << s.peep() << endl;
    return 0;
}