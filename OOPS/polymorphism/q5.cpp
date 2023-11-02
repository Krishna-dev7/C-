#include <iostream>
using namespace std;

class Event{
    public:
        static int count;
        Event(){
            count++;
        }
        void display(){
            cout<< "I am event class"<<endl;
        }
};
int Event::count = 0;

int main(){
    int n;
    cout<< "Enter number of objects: ";
    cin>> n;
    Event *obj = new Event[n];
    cout<<"\nNumber of objects created: " << Event::count << endl;
    return 0;
}