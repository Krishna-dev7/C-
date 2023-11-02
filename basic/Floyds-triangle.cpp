// Floyd's Triangle pattern
# include <iostream>
using namespace std;

int main() {
    int n,i,m;
    cout<<"Enter the number of rows: \n";
    cin>>n;
    m = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++,m++){
            cout<<m;
        }
        cout<<endl;
    }
    return 0;
}