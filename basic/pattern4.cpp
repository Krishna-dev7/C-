// Half pyramid using numbers only
# include <iostream>
using namespace std;

int main() {
    int n, i;
    cout<<"enter the number of rows: \n";
    cin>>n;
    i = 1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}