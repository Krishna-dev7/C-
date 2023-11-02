#include <iostream>
#include <string.h>
using namespace std;

class Queue{
    char words[5][20];
    int r,f,n;
    public:
        Queue(){
            r = -1;
            f = -1;
            n = 5;
        }

        void insert(char a[]){
            if((f== 0 && r == n-1) || f-r == 1){
                cout<< "Queue is overflow guys: " << endl;
                return ;
            }

            if(r == n-1)
                r = 0;
            else 
                r++;
            
            strcpy(words[r], a);

            if(f == -1)
                f = 0;
        }

        char * del(){
            if(f== -1){
                cout<< "Queue is underflow guys: " << endl;
                exit(0) ;
            }

            char* data = words[f];
            if(f == r){
                f = -1;
                r = -1;
            }
            else if(f == n-1){
                f = 0;
            }
            else {
                f++;
            }

            return data;
        }

        void display(){
            if( f == -1){
                cout<< "Queue is empty: " << endl;
                return ;
            }
            else {
                for(int i=f; i<=r; i++){
                    cout<< words[i] << endl;
                }
            }
        }
};

int main(){
    Queue q;
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
                char str[20];
                cin>> str;
                q.insert(str);
                break;
            case 2:
                cout<< q.del();
                break;
            case 3:
                q.display();
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