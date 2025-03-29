#include <iostream>
using namespace std;

int main(){

    int a[5] = {2,-4,1,-3,-5};

    for(int i=0; i<5; i++){
        if(a[i]<0){
            cout << "Negative elements in the array are : " << a[i] << endl;
        }
    }

}