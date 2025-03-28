#include <iostream>
using namespace std;

int main(){

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout << "Enter number for index " << i << " : " << endl;
        cin >> arr[i];
    }

    cout << "Your all array elements : ";

    for(int a : arr){
        cout << a << " ";
    }

}