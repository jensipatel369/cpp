#include <iostream>
using namespace std;
#include <string.h>

//Mutilevel inheritance

class grandparents{
    public :
    void greet(){
        cout << "Greeting from grandparents..!" << endl;
    }
};

class parents : public grandparents{
    public :
    void greet2(){
        cout << "Greeting from parents..!" << endl;
    }
};

class child : public parents{
    public :
    void greet3(){
        cout << "Greeting from child..!";
    }
};

int main(){
    
    child obj;
    obj.greet();
    obj.greet2();
    obj.greet3();

    return 0;
}