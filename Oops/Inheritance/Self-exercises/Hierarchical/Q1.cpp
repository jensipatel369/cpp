#include <iostream>
using namespace std;
#include <string.h>

//Hierarchical inheritance

class animal{
    public :
    void greet(){
        cout << "This is a animal..!" << endl;
    }
};

class cat : public animal{
    public :
    void greet2(){
        cout << "This is a cat..!" << endl;
    }
};

class dog : public animal{
    public :
    void greet3(){
        cout << "This is a dog..!";
    }
};

int main(){
    
    cat obj;
    obj.greet();
    obj.greet2();

    dog obj2;
    obj2.greet();
    obj2.greet3();


    return 0;
}