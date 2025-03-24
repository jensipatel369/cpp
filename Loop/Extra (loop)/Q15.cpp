#include <iostream>
using namespace std;

main(){

   int num;
   int fact = 1;

   cout << "Enter a number to found factorial :";
   cin >> num;

   for(int i=num; i>=1; i--){
    fact = fact * i;
   }

   cout << "factorial of " << num << " is " << fact;
   
}