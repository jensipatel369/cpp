#include <iostream>
using namespace std;

int main(){

   int row;
   cout << "Enter a value for row : ";
   cin >> row;

   int col;
   cout << "Enetr a value for col : ";
   cin >> col;

   int arr[row][col];

   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout << "Enetr a value for row : " << i << " col : " << j << " : ";
        cin >> arr[i][j];
    }
   }

   int sum = 0;

   for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout << arr[i][j] << " ";
        sum += arr[i][j];
    }
    cout << endl;
   }

   int m;
   m = row*col;

   cout << "Average of all elements : " << sum/m << endl;
   // cout << "Average of all elements : " << sum/(row*col) << endl;
   cout << "Sum of all elements : " << sum;

}