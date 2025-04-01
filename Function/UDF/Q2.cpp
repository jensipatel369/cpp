#include <iostream>
using namespace std;

// UDF 1. TNRN

void udf(){
    cout << "Hello World !" << endl;
};

// UDF 2. TSRN

void sum(int a,int b){
    cout << "The sum of two num : " << a + b << endl;
};

void subtraction(int m,int n){
    cout << "The subtraction of two num : " << m-n << endl;
};

void multiple(int i,int j){
    cout << "The multiple of two num : " << i*j;
};

void division(int a,int b){
    cout << "The division of two num : " << a/b << endl;
};

int main(){

    cout << "Welcome to our calculator !" << endl << endl;
    cout << "Enter your Choice : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. division" << endl << endl << endl;

    cout << "Enter a your choice number : ";

    int choice;
    cin >> choice;

    int num1;
    int num2;

    cout << "Enter the value num1 : ";
    cin >> num1;
    cout << "Enter the value num1 : ";
    cin >> num2;

    if(choice == 1){
        sum(num1,num2);
    }
    else if(choice == 2){
        subtraction(num1,num2);
    }
    else if(choice == 3){
        multiple(num1,num2);
    }
    else if(choice == 4){
        division(num1,num2);
    }

    return 0;

}