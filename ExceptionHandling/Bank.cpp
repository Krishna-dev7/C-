#include <iostream>
#include <exception>
using namespace std;

class Bank{
    int balance;
    int debit;
    public:
        Bank(int amount){
            this-> balance = amount;
        }
        int withdraw(){
            cout << "enter amount to debit: ";
            cin >> this -> debit;
            try{
                if(debit > 500){
                    this -> balance -= debit;
                }
                else {
                    throw debit;
                }
            }
            catch(...){
                cout << "your debit amount is too high:" << endl;
            }
        }
};

int main(){
    Bank b(1000);
    b.withdraw();

    return 0;
}