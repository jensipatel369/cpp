#include <iostream>
using namespace std;
#include <string.h>

class person{

    private :
    char name[50];
    int age;
    char city[50];

    public : 
    //parameterized constructor
    person(const char* name,int age,const char* city){
        strcpy(this->name,name);
        this->age = age;
        strcpy(this->city,city);
    }

    void getData(){
        cout << "Name" << " : " << this->name << endl;
        cout << "Age" << " : " << this->age << endl;
        cout << "City" << " : " << this->city << endl;
    }

    //Desturctor
    ~person(){
        cout << "Thanking you for visiting out program";
    }

};

int main(){

    person obj("Jensi",18,"Jasdan");
    obj.getData();

    return 0;

}