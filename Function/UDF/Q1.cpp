#include <iostream>
using namespace std;

// UDF 1. TNRN

void udf(){
    cout << "Hello World !" << endl;
};

// UDF 2. TSRN

void sum(int a,int b){
    cout << a + b << endl;
};

void subtraction(int m,int n){
    cout << m-n << endl;
};

void multiple(int i,int j){
    cout << i*j;
};

void division(int a,int b){
    cout << "The division of two num : " << a/b << endl;
};

int main(){
    udf();
    sum(25,25);
    subtraction(10,20);
    multiple(5,5);
    division(20,5);
    return 0;
}