#include <iostream>
using namespace std;
#include <string.h>

// Class based template

template <typename T1,typename T2,typename T3> 
class person{
    public :
    T1 id;
    T1 age;
    T2 interest;
    T3 name[50];
};

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