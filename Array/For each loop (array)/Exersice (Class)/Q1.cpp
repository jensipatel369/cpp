#include <iostream>
using namespace std;

int main(){

    int arr[5] = {10,12,14,16,18};
    int sum = 0;

    for(int a : arr){
        sum += a;
    }

    cout << sum/5;
    
}