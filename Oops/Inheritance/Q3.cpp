#include <iostream>
using namespace std;
#include <string.h>

//Mutiple inheritance

class father{
    public :
    void greet(){
        cout << "Greeting from father..!" << endl;
    }
};

class mother{
    public :
    void greet2(){
        cout << "Greeting from mother..!" << endl;
    }
};

class child : public father,public mother{
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