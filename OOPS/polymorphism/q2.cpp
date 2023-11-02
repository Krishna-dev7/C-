#include <iostream>
#include <string.h>
using namespace std;

class word{
   char w[100];
   public:
        word(char s[]){
            strcpy(w,s);
        }
        word(){
            strcpy(w,"");
        }
        void display(){
            cout<<w<<endl;
        }

        friend bool operator == (word &a, word &b);
        void operator + (word &b){
            cout<< "string after concatination: "<< strcat(w, b.w) << endl;
        }
};

bool operator == (word &a, word &b){
    return strcmp(a.w, b.w);
}

int main(){
    char s[20] = "rohit";
    char t[20] = "shah";
    cout<<endl;
    word w1(s), w2(t);
    cout<<endl;
    w1+w2;
    cout<<endl;
    if(t == s){
        cout<<"Both string are equal";
    }
    else
        cout<<"not equal";

    return 0;
}