#include <iostream>
using namespace std;

int main(){

    int arr[5] = {10,12,14,16,18};    
    int arr2[5] = {10,12,14,16,18};    
    int arr3[5];  
    
    for(int i=0; i<=4; i++){
        arr3[i] = arr2[i] + arr[i];
    }

    for(int a : arr3){
        cout << a << endl;        
    }
    
}