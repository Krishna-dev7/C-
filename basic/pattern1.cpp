#include <iostream>
using namespace std;

int main() {

    int row, col;
    int i,j,n;
    cout<<"enter value of row and columns\n";
    cin>>row>>col;
    n = row;

    for( i=0; i<row; i++){
        for( j=0; j<col; j++){
            if( i==0 || i==(row-1) || j==0 || j==(col-1)){
                cout<<"*";  
            }
            else {
                cout<<" ";
            }

        }
        cout<<"\n";
    }

    return 0;
}