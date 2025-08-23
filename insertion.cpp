#include<iostream>
using namespace std;


class Node{
public:
    int data;
Node* next;

Node(int newdata)
{
    data =newdata;
    next=nullptr;
}
};
void printlist(Node* head)
{
    Node* curr=head;
while(curr!=nullptr)
{
    cout<<curr->data<<endl;
    curr=curr->next;

}

}

Node*  insertfirst(Node* head,int newdata)
{
    Node* newnode = new Node(newdata);
newnode->next=head;

return  newnode;

}

Node* insertend(Node* head,int newdata)
{
    Node* newnode=new Node(newdata);

    if (head == nullptr) {
        return newnode;
    }
Node* last =head;

while(last->next!=nullptr)
{
last=last->next;
}
last->next = newnode;
return head;

}


int main()
{
Node* head = new Node(50);

head->next=new Node(60);
head->next->next=new Node(70);
head=insertfirst(head,40);
head =insertend(head,80);
head=insertend(head,90);

printlist(head);

}