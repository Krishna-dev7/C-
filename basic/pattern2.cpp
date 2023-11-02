# include <iostream>
using namespace std;

int main() {

    int row;
    cout<<"enter the number of rows: \n";
    cin>>row;

    for(int i= (row-1); i>= 0; i--){
        for(int j= 0; j<= i; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}