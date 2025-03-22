#include <iostream>
using namespace std;

main(){

   int N;
   int fact = 1;

   cout << "Enter a number to found factorial :";
   cin >> N;

   for(int i=N; i>=1; i--){
      if(N<=1){
         fact = 1;
         break;
      }
    fact = fact * i;
   }

   cout << "factorial of " << N << " is " << fact;
   
}