#include <iostream>
using namespace std;

class Queue{
  private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int count;

  public:
    Queue(int capacity){
        this->arr = new int[capacity];
        this->front = -1;
        this->rear = -1;
        this->capacity = capacity;
        this->count = 0;
    }

    void enqueue(int element){
        if(this->rear == -1 && this->front == -1){
            this->front++;
            this->rear++;
            this->arr[this->rear] = element;
            this->count++;
            cout << "Queue is empty..!" << endl << endl;
        }else{
            this->rear++;
            this->arr[rear] = element;
            this->count++;
            cout << "Element enqueue successfully..!" << endl << endl;
        }
    }

    void dequeue(int element){
       if(this->rear == -1 && this->front == -1){
            cout << "Queue is empty..!" << endl << endl;
        }else{
            this->front++;
            cout << "Element enqueue successfully..!" << endl << endl;
        }
    }

    void frontEl(){
        cout << this->arr[this->front];
    }

    void rearEl(){
        cout << this->arr[this->rear];
    }

    void display(){
        if(this->rear == -1 && this->front == -1){
            cout << "Queue is empty..!" << endl << endl;
        }else{
            for(int i=this->front; i>=0; i--){
                cout << this->arr[i] << " ";
            }
        }
    }
    void isempty(){
        if(this->count == 0){
            cout << "Queue is empty..!" << endl << endl;
        }else{
            cout << "Queue is not empty..!" << endl << endl;            
        }
    }

    void isfull(){
         if(this->capacity == rear){
            cout << "Queue is full..!" << endl << endl;
        }else{
            cout << "Queue is not full..!" << endl << endl;
        }
    }

    void size(){
        if(this->rear == -1 && this->front == -1){
            cout << "Queue is empty..!" << endl << endl;
        }else{
            cout << "Queue size is : " << this->count << endl << endl;
        }
    }

};

int main(){

    Queue Queue(5);
    int choice, element;

    do{
        cout << "----------------------" << endl;
        cout << "Press 1 for enqueue" << endl;
        cout << "Press 2 for dequeue" << endl;
        cout << "Press 3 for front element" << endl;
        cout << "Press 4 for rear element" << endl;
        cout << "Press 5 for display" << endl;
        cout << "Press 6 for is empty" << endl;
        cout << "Press 7 for is full" << endl;
        cout << "Press 8 for size" << endl;
        cout << "Press 0 for exit" << endl;
        cout << "----------------------" << endl << endl;

        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice){

        case 1:
            cout << "Enter the Element : ";
            cin >> element;
            Queue.enqueue(element);
         break;

        case 2:
            Queue.dequeue(element);
         break;

        case 3:
            Queue.frontEl();
         break;

        case 4:
            Queue.rearEl();
         break;
        
        case 5:
            Queue.display();
         break;

        case 6:
            Queue.isempty();
         break;

        case 7:
            Queue.isfull();
         break;

        case 8:
            Queue.size();
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
