#include <iostream>
using namespace std;

main(){

    int num;
    int sum = 0;

    cout << "enter a number :";
    cin >> num;

    while(num>0){

        int lastDigit = num % 10;
        sum = sum + lastDigit;
        num = num / 10;

    }

    cout << "Sum of all digit is : " << sum;   

}