#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book{
    int book_id;
    const char* book_name;
    int year;
    const char* publication;
    public:
        Book(){
            book_id = 0;
            book_name = 0;
            year = 0;
            publication = 0;
        }

        Book(int a, const char* p, int b, const char* q){
            this->book_id = a;
            this->book_name = p;
            this->year = b;
            this->publication = q;
        }

        const char* getbookname(){
            return this->book_name;
        }

        const char* getpublication(){
            return this->publication;
        }

        int getyear(){
            return this->year;
        }
        int getbookid(){
            return this->book_id;
        }
};

class Student{
    int rollno;
    const char* name;
    int age;
    Book* books;
    public:
        Student(){
            rollno = 0;
            name = 0;
            age = 0;
            books = 0;
        }
        Student(int r, const char* n, int y, Book &b){
            rollno = r;
            name = n;
            age = y;
            books = &b;
        }

        void display(){
            cout<< rollno << '\t';
            cout<< name << '\t';
            cout<< age << '\t';
            cout<< books->getbookname() << '\t';
            cout<< books->getpublication() << endl;
        }
};


int main(){
    // char s[20] = "Miracle";
    // char m[20] = "Magic";
    Book book1(1, "miracle", 24, "master");
    Book book2(2, "Geeta", 24, "Gokul");
    Student s1(1, "Krishna", 12, book1);
    Student s2(2, "suraj" , 13, book1);
    Student s3(3, "rohit", 24, book2);

    s1.display();
    cout<< endl;
    s2.display();
    cout<< endl;
    s3.display();

    // cout<< book1.getbookname() << endl;
    // cout<< book1.getpublication() << endl;

    return 0;
}