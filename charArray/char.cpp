#include <iostream>
using namespace std;

int getLength(char *name);

// function to lower case
char toLowerCase(char ch){
    // cout<< &ch << endl;
    if(ch >= 'a' && ch <= 'z')
       return ch;
    else{
        ch = ch - 'A' + 'a';
        return ch;
    }
}

//to check the palindrome
bool checkPalindrome(char* name){
    int s=0;
    int e = getLength(name) -1;
    while(s<e){

        if( toLowerCase(name[s++]) != toLowerCase(name[e--])){
            return false;
        }
    }
    return true;
}


//reverse a string
void doreverse(char *name, int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
    cout<< name << endl;
}

//to get the length of the string
int getLength(char *name){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}


int main(){
    char name[20];
    cout<< "Enter your name: " <<endl;
    cin>> name;


    // if(checkPalindrome(name))
    //     cout<<"Yes it is palindrome. " << endl;
    // else
    //     cout<<"No, it is not palindrome" << endl;
    

    cout<< toLowerCase('M') << endl;
    cout<< toLowerCase('W') << endl;
    // int arr[5] = {1,2,3};
    /* cout<< getLength(name) << endl;
    int len = getLength(name);
    doreverse(name, len);
    */
    
    // cout<< name <<endl;

    // cout<< name <<endl;
    // cout<< *(arr+3) <<endl;

    return 0;
}