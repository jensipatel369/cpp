#include <iostream>
using namespace std;

int main(){

    int arr[5];
    
    cout << "Enter four number one by one : ";

    for(int i=0; i<=4; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=4; i++){
        cout << arr[i] << endl;
    }

}