#include <iostream>
#include <conio.h>
using namespace std;

class Matrix{
    public:
    int m[2][2];
        Matrix(){
            // m[0][0] = 0;
            // m[0][1] = 0;
            // m[1][0] = 0;
            // m[1][1] = 0;
        cout<< "Enter your matrix " << endl;
        }

        // Matrix(int arr[][]){

        //     for(int i=0; i<2; i++){
        //         for(int j=0; j<2; j++){
        //             int data = arr[i][j];
        //             m[i][j] = data;
        //         }
        //     }
        // }
        void input();
        // void input(Matrix &A);
        void display();

        // Matrix(Matrix &b);
        void operator =(Matrix &a);
        friend void add(Matrix &a, Matrix &b);
        friend Matrix operator -(Matrix a, Matrix b);
};

void Matrix::operator =(Matrix &a){
      for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            m[i][j] = a.m[i][j];
        }
    }
}

// Matrix::Matrix(Matrix &b){
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             m[i][j] = b.m[i][j];
//         }
//     }
// }   

void Matrix::input(){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            // cout<< "Enter your matrix" << i << j << endl;
            cin>> m[i][j];
        }
    }
}

void Matrix::display(){
    cout<< "Matrix a" << endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<< m[i][j] << '\t';
        }
        cout<< endl;
    }
}

void add(Matrix &a, Matrix &b){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            int data1 = a.m[i][j];
            int data2 = b.m[i][j];
            cout<< data1+data2 << '\t';
        }
        cout<< endl;
    }
}

Matrix operator -(Matrix a, Matrix b){
    Matrix c;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            c.m[i][j] = a.m[i][j] - a.m[i][j];
        }
    }
    return c;
}

int main(){
    Matrix a;
    a.input();
    a.display();
    Matrix b;
    a.input();
    a.display();
    add(b,a);



    return 0;
}



