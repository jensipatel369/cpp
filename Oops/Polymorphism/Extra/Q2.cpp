#include <iostream>
using namespace std;
#include <string.h>

//Method overriding (run-time)

class shape{
    public :
    void draw(){
        cout << "Drawing a shape..." << endl;
    }
};

class circle : public shape{
    public :
    void draw(){
        cout << "Drawing a circle..." << endl;
    }
};

int main(){

    circle obj;
    obj.draw();

    return 0;
}