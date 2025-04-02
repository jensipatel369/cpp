#include <iostream>
using namespace std;

void array(){
    int a;
    cout << "Enter a size of array : ";
    cin >> a;
    
    int arr[a];
    for (int i=0; i<a; i++){
        cin >> arr[i];
    }
    
    int choice;
    cout << "Press 1 for sum" << endl;
    cout << "Press 2 for average" << endl << endl;
    cout << "Enter a number : ";
    cin >> choice;

    int sum=0;
    int avg;

    for(int i=0; i<a; i++){
        sum += arr[i];
    }
    if(choice == 1){
        cout << "Sum of array is : " << sum << endl << endl;
    } 
    else if(choice == 2){
        avg = sum / a; 
        cout << "Average of array is : " << avg;
    } 
};

int main(){
    array();
}