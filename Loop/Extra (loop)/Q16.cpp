#include <iostream>
using namespace std;

main(){

   int num;

   cout << "Enter a number :";
   cin >> num;

   int i = 1;
   cout << "factor of " << num << " is ";

   while(i<=num){
    if(num%i==0){
        cout << i;
    }
    i++;
   }

}