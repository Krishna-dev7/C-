#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Employees {
    int id;
    char* name;
    float salary;
    public:
        Employees(int id, char* n, float salary){
            this-> id = id;
            name = n;
            this-> salary = salary;
        }

        Employees(){
            id = 0;
            strcpy(name, "");
            salary = 0;
        }

        int getid(){
            return id;
        }
        float getsalary(){
            return salary;
        }
        char* getname(){
            return name;
        }

        virtual float calculatePayroll() = 0;   //it is also called as abstract methods
};

class FullTimeEmployees: public Employees{
    int NoOfDays;
    public:
        FullTimeEmployees(int n = 0){
            NoOfDays = n;
        }

        float calculatePayroll(){
            int s = getsalary();
            return (NoOfDays/30) * s;
        }
};

class PartTimeEmployees: public Employees{
    int hoursWorked;
    float hourlyRate;
    public:
        PartTimeEmployees(int n=0, float h=0){
            hoursWorked = n;
            hourlyRate = h;
        }

        float calculatePayroll(){
            return hoursWorked * hourlyRate;
        }
};

class ContractEmployees: public Employees{
    float contractAmount;
    public:
        ContractEmployees(float c){
            contractAmount = c;
        }

        float calculatePayroll(){
            return contractAmount;
        }
};


int main(){
    // now class employees is abstract class, so we cannot create objects of it

    return 0;
}