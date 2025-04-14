#include <iostream>
using namespace std;
#include <string.h>

//Hierarchical inheritance

class vehicle{
    public :
    void greet(){
        cout << "This is a vehicle..!" << endl;
    }
};

class bike : public vehicle{
    public :
    void greet2(){
        cout << "This is a bike..!" << endl;
    }
};

class car : public vehicle{
    public :
    void greet3(){
        cout << "This is a car..!";
    }
};

int main(){
    
    bike obj;
    obj.greet();
    obj.greet2();

    car obj2;
    obj2.greet();
    obj2.greet3();


    return 0;
}