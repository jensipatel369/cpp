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

    cout << endl << endl;

    int index;
    cout << "Enter the index number to delete :";
    cin >> index;

    for(int i=0; i<size; i++){
        if(i==index){
            arr[i] = 0;
        }
    }

    cout << "Array after deletation :";

    for(int a : arr){
        cout << a << " ";
    }

}