#include <iostream>
using namespace std;

class Stack{
  private:
    int *arr;
    int top;
    int capacity;
    int count;

  public:
    Stack(int capacity){
        this->arr = new int[capacity];
        this->top = -1;
        this->capacity = capacity;
        this->count = 0;
    }

    void push(int element){
        if(this->capacity == this->count){
            cout << "Stack is over flowed..!" << endl << endl;
        }else{
            this->top++;
            this->arr[top] = element;
            this->count++;
            cout << "Element inserted successfully..!" << endl << endl;
        }
    }

    void pop(){
        if(this->top == -1){
            cout << "Stack is under flowed..!" << endl << endl;
        }else{
            this->top--;
            this->count--;
            cout << "Element deleted successfully..!" << endl << endl;
        }
    }

    void peek(){
        if(this->top == -1){
            cout << "Stack is empty..!" << endl << endl;
        }else{
            cout << "Peek element is  : " << this->arr[this->top] << endl << endl;
        }
    }

    void display(){
        if(this->top == -1){
            cout << "Stack is empty..!" << endl << endl;
        }else{
            for(int i=this->top; i>=0; i--){
                cout << this->arr[i] << " ";
            }
        }
    }

    void isempty(){
        if(this->top == -1){
            cout << "Stack is empty..!" << endl << endl;
        }else{
            cout << "Stack is not empty..1" << endl << endl;            
        }
    }

    void isfull(){
         if(this->capacity == this->count){
            cout << "Stack is full..!" << endl << endl;
        }else{
            cout << "Stack is not full..!" << endl << endl;
        }
    }

    void size(){
        if(this->top == -1){
            cout << "Stack is empty..!" << endl << endl;
        }else{
            cout << "Stack size is : " << this->count << endl << endl;
        }
    }

};

int main(){

    Stack stack(2);
    int choice, element;

    do{
        cout << "----------------------" << endl;
        cout << "Press 1 for push " << endl;
        cout << "Press 2 for pop " << endl;
        cout << "Press 3 for peek " << endl;
        cout << "Press 4 for display " << endl;
        cout << "Press 5 for is empty " << endl;
        cout << "Press 6 for is full " << endl;
        cout << "Press 7 for size " << endl;
        cout << "Press 0 for exit " << endl;
        cout << "----------------------" << endl << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice){

        case 1:
            cout << "Enter the Element : ";
            cin >> element;
            stack.push(element);
         break;

        case 2:
            stack.pop();
         break;

        case 3:
            stack.peek();
         break;

        case 4:
            stack.display();
         break;

        case 5:
            stack.isempty();
         break;

        case 6:
            stack.isfull();
         break;

        case 7:
            stack.size();
         break;

        case 0:
            cout << "Exit The Program !";
         break;

        default:
            cout << "Invalid Choice. Plese Try Again !" << endl;
         break;
        }
    } while (choice != 0);
}
