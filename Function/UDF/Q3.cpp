#include <iostream>
using namespace std;

// UDF 3. TNRS

int multi(){
    int a;

    cout << "Enter a value of a : ";
    cin >> a;

    return a*a;
};

int square(int a){
    return a*a;
}

// UDF 4. TSRS

int square(){
    int num;
    cout << "Enter a number to get it's square : ";
    cin >> num;

    cout << "Square of " << num << " : " << square(num);
}

int main(){
    cout << "Square of : " << multi();
    return 0;
}