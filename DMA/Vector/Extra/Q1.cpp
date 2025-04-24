#include <iostream>
using namespace std;
#include <vector>
#include <string.h>

int main(){

    //Vector type 1 :
    vector <int> Arr;

    //Vector type 2 :
    vector <int> Arrr(5,2);
    //Loop
    for(int i=0;i<4;i++){
        cout << Arrr[i] << endl;
    }

    cout << endl << endl;
    
    //Vector type 3 :
    //Command for compile with g++ -std=c++11 file.cpp
    vector <int> Arrrr{12,15,14,16,17};

    //Output
    cout << Arrrr[0] << endl;
    cout << Arrrr[1] << endl;
    cout << Arrrr[2] << endl;
    cout << Arrrr[3] << endl;
    cout << Arrrr[4];

    cout << endl << endl;

    //Loop
    for(int i=0;i<5;i++){
        cout << Arrrr[i] << endl;
    }
    
    return 0;
}
