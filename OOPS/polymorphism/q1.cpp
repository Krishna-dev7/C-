#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class Bank{
    int bank_id;
    char bank_name[20];
    char branch_name[30];
    public:
        Bank(){
            bank_id = 0;
        }

        // Bank(int id, char arr1[], char arr2[]){
        //     bank_id = id;
        //     strcpy(bank_name, arr1);
        //     strcpy(branch_name, arr2);
        // }

        void setBank(){
            cout<< "Enter bank id: ";
            cin>> bank_id;
            cout<< "Enter bank name: ";
            // cin>> bank_name;
            cin.ignore();
            cin.getline(bank_name, 20);

            cout<< "Enter bank branch name: ";
            // cin>> branch_name;
            cin.ignore();
            cin.getline(branch_name, 30);
        }

        void display1(){
            cout<<"bank_id: " << bank_id <<endl;
            cout<<"bank name: "<< bank_name <<endl;
            cout<<"branch name: "<< branch_name <<endl;
        }

};


class Account: public Bank{
    int acc_no;
    char ac_name[30];
    char ac_type[30];
    float balance;
    public:
        Account(){
            acc_no = 0;
        }

        // Account(int no, char name[], char type[]){
        //     this->acc_no = no;
        //     strcpy(ac_name, name);
        //     strcpy(ac_type, type);
        // }

        float setbalance(){
            cout<< "Enter balance: ";
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

        void setAccount();

        char * getaccounttype(){
            return this->ac_type;
        }

        void display2(){
            cout<<"account number: " << acc_no << endl;
            cout<<"account holder name: "<< ac_name << endl;
            cout<<"account type: "<< ac_type << endl;
            cout<< "bank balance: " << balance << endl;
        }
};

void Account::setAccount(){
            cout<< "Enter account no: ";
            cin>> this->acc_no;
            cout<< "Enter account type: ";
            // cin>> ac_type;
            cin.ignore();
            cin.getline(this->ac_type, 30);
            cout<< "Enter account name: ";
            // cin>> ac_name;
            cin.ignore();
            cin.getline(this->ac_name, 30);
            setbalance();
}

class Transaction: public  Account{
    public:

        void createAccount(){
            setBank();
            setAccount();
            cout<< endl;
            deposit();
        }

        void withdraw();

        void deposit(){
            int dvalue;
            float balance = getbalance();
            cout<< "Enter deposit amount: "<< endl;
            cin>> dvalue;
            balance += dvalue;
            setbalance(balance);
        }

        void display(){
            display1();
            display2();
        }

};

void Transaction::withdraw(){
    int value;
    cout<< "Enter amount to deduct: " << endl;
    cin>>value;
    float balance = getbalance();
    if(balance-value <= 500)
        cout<< "Insufficient balance amount to withdraw" << endl;
    else{
        setbalance(balance - value);
        cout<< "Current balance: "<< getbalance() << endl;
    }
}

int main(){
    Transaction t1[3];
     
    /*
    for(int j=0; j<3; j++){
        t1[0].createAccount();
        t1[0].display();
        t1[0].withdraw();
    }
    */

    t1[0].createAccount();
    cout<<endl;
    t1[0].withdraw();
    cout<< endl;
    char type[20];
    cout<< "Enter account type:" << endl;
    cin>> type;
    for(int i=0; i<3; i++){
        
        if(strcmp(t1[i].getaccounttype(),type) == 0){
            t1[i].display();
        }
    }
    
    return 0;
}