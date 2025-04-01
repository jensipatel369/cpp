#include <iostream>
using namespace std;

// UDF 4. TSRS

int square(int a){
    return a*a;
}

int main(){
    int num;
    cout << "Enter a number to get it's square : ";
    cin >> num;

    cout << "Square of " << num << " : " << square(num);
}