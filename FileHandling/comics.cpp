#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string st;
    // opening a file and writing
    ofstream  out("comics.txt");
    out << "Hello Universe! I am spider-man." << endl;

    //reading a file and closing a file
    ifstream in("comics.txt");
    in >> st; //we will prefer string type data because in will return some str
    cout << st;
    return 0;
}