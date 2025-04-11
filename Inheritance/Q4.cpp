#include <iostream>
using namespace std;
#include <string.h>

//Hierarchical inheritance

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
        cout << "Greeting from child2..!";
    }
};

int main(){
    
    child obj;
    obj.greet();
    obj.greet2();

    child2 obj2;
    obj2.greet();
    obj2.greet3();


    return 0;
}