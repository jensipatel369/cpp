// call by const refernce (output :- error)

#include <iostream>
using namespace std;

void sum(const int &n){
    int n = n + 10;
}

int main(){
    int a = 5;
    cout << "Before, a :" << a << endl;

    sum(a);
    cout << "After, a :" << a << endl;

    return 0;

}