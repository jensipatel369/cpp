#include <iostream>
using namespace std;
#include <vector>
#include <string.h>

int main(){

    //Method :-
    //1.begin()
    //2.end();
    //3.clear()

    vector <int> Arrrr{12,15,14,16,17};

    //4.push_back() - Add last number
    Arrrr.push_back(33);

    //5.pop_back() - Remove last number
    Arrrr.pop_back();

    //6.insert() - Ex. 2nd position(+2) and add number(66)
    Arrrr.insert(Arrrr.begin()+2,66);

    //7.erase() - Erase
    Arrrr.erase(Arrrr.begin()+2);

    //8.size() - Resizing
    for(int i=0;i<Arrrr.size();i++){
        cout << Arrrr[i] << endl;
    }

    //9.empty() 0(True) 1(Flase) - True or False
    cout << Arrrr.empty() << endl;

    //10.at() - Index value
    cout << Arrrr.at(1) << endl;

    //11.front()
    //12.back()
    
    return 0;
}