#include <iostream>
using namespace std;
#include <string.h>

//Method overloading (compile-time)

class calc{
    public :
    int sum(int a,int b){
        cout << a + b << endl;
    }
    int sum(int a,int b,int c){
        cout << a + b + c << endl;
    }
};

int main(){

    calc obj;
    obj.sum(10,10);
    obj.sum(10,10,10);

    return 0;
}