#include<iostream>
using namespace std;

class node
{
    public:
int data;

node* next;

node(int newdata)
{
    data = newdata;
    next = nullptr;
}

};

class myqueue{
node* front;
node* rear;

public:

myqueue()
{
    front=rear=nullptr;
}

void enqueue(int val)
{
    node* newnode = new node(val);
    if(!front)
    {
        front=rear=newnode;
        rear->next=front;
    
    }
    else{
        rear->next=rear;
        rear =newnode;
        rear->next=front;
    }
}
void dequeue() {
        if (!front) {
            cout << "Queue Underflow\n";
            return;
        }

        if (front == rear) { // only one element
            delete front;
            front = rear = nullptr;
        } else {
            node* temp = front;
            front = front->next;
            rear->next = front; // keep circular
            delete temp;
        }
    }

void display() {
        if (!front) {
            cout << "Queue is empty\n";
            return;
        }
        node* temp = front;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }

};
int main()
{

myqueue q;

q.enqueue(90);
q.display();


}