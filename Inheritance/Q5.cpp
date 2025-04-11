#include <iostream>
using namespace std;
#include <string.h>

//Hybrid inheritance

class father{
    public :
    void greet(){
        cout << "Greeting from father..!" << endl;
    }
};

class child : public father{
    public :
    void greet2(){
        cout << "Greeting from child..!" << endl;
    }
};

class child2 : public father{
    public :
    void greet3(){
        cout << "Greeting from child2..!" << endl;
    }
};

class child3 : public child,public child2{
    public :
    void greet4(){
        cout << "Greeting from child3..!" << endl;
    }
};

int main(){
    
    child3 obj;
    obj.child2::greet();
    obj.greet2();
    obj.greet3();
    obj.greet4();

    return 0;
}