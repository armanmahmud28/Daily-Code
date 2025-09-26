#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int newdata) {
        data = newdata;
        next = nullptr;
    }
};

Node* deletefirst(Node* head)
{

    Node* temp = head;

    head = head->next;
    delete temp;
    return head;
}
void printl(Node* head){
    Node* curr= head;

  

    while(curr!=nullptr)
    {
       cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}

Node* lastdelete(Node* head)
{
     Node* last=head;

    while(last->next->next!=nullptr)
    {
        last=last->next;

    }

delete(last->next);

last->next=nullptr;

return head;





}
Node* head(Node* head,int pos)
{
    
}

int main()

{
Node* head = new Node(40);

head->next = new Node(50);

head->next->next= new Node(60);

head->next->next->next=new Node(70);

printl(head);
cout<<endl;
head=lastdelete(head);
printl(head);
}