// Half pyramid after 180 deg rotation pattern
# include <iostream>
using namespace std;

int main() {
    int row;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;

    for(int i=1; i<=row; i++){
        for(int j=1; j<= row; j++){
            if (j<=row-i){
            cout<<" ";
            }

            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}