#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Bank{
    public:
    int bank_id;
    char bank_name[20];
    char branch_name[30];
        Bank(){
            bank_id = 0;
        }

        Bank(int id, char arr1[], char arr2[]){
            bank_id = id;
            strcpy(bank_name, arr1);
            strcpy(branch_name, arr2);
        }

        void setBank(){
            cout<< "Enter bank id: " << endl;
            cin>> bank_id;

            cout<< "Enter bank name: " << endl;
            cin>> bank_name;

            cout<< "Enter bank branch name: " << endl;
            cin>> branch_name;
        }

};


class Account: public Bank{
    public:
    int acc_no;
    char ac_name[30];
    char ac_type[30];
    float balance;
        Account(){
            acc_no = 0;
        }

        Account(int no, char name[], char type[]){
            this->acc_no = no;
            strcpy(ac_name, name);
            strcpy(ac_type, type);
        }

        float setbalance(){
            cout<< "Enter balance: " << endl;
            cin>> balance;
            return balance;
        }
        void setbalance(float value){
            this->balance = value;
        }
        // to get balance

        float getbalance(){
            return this->balance;
        }

        void setAccount(){
            cout<< "Enter account type: " <<endl;
            cin>> ac_type;
            cout<< "Enter account name: " <<endl;
            cin>> ac_name;
            cout<< "Enter account no: " << endl;
            cin>> this->acc_no;
            setbalance();
        }
       
};

class Transaction: public  Account{
    public:
        void createAccount(){
            setBank();
            setAccount();
        }

        void withdraw(){
            int value;
            cout<< "Enter amount to deduct: " << endl;
            cin>>value;

            if(balance-value <= 500)
                cout<< "Insufficient balance amount to withdraw" << endl;
            else{
                setbalance(balance - value);
                cout<< "Current balance: "<< getbalance() << endl;
            }
        }

        void display(){
            cout<< acc_no << endl;
            cout<< bank_id<< endl;
        }

};

int main(){
    Transaction t1[3];
    t1[0].createAccount();
    t1[0].withdraw();


    return 0;
}