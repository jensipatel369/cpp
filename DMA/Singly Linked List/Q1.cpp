#include<iostream>
using namespace std;

//Singly Linked List

class Node{
    public:
       int data;
       Node *next; 
};

int main(){

    Node *n1 = NULL;
    n1 = new Node();
    n1->data = 25;
    n1->next = NULL;
   
    Node *n2 = NULL;
    n2 = new Node();
    n2->data = 45;
    n2->next = NULL;
    n1->next = n2;
   
    Node *n3 = NULL;
    n3 = new Node();
    n3->data = 78;
    n3->next = NULL;
    n2->next = n3;
   
    cout << n1->data << " " << n1->next << endl;
    cout << n2->data << " " << n2->next << endl;
    cout << n3->data << " " << n3->next << endl;

}
