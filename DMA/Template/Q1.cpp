#include <iostream>
using namespace std;
#include <string.h>

// Funcation based template

template <typename T>
T sum(T a,T b){
    cout << a + b << endl;
}

int summ(int a,int b){
    cout << a + b << endl;
}

int main(){

    sum (12.8,12.8);
    summ (12.8,12.8);
    
    return 0;
}