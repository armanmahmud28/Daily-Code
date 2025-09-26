#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int newdata)
{
    data=newdata;
    next=nullptr;
}

};
Node* deletefirst(Node* head){

Node* curr =head;

if(curr==nullptr)
{
    cout<<"It's Null Linked List"<<endl;
}


head=head->next;
delete curr;
return head;


}

Node* deletelast(Node* head)
{
    Node* curr=head;
    if(curr==nullptr)
    {
            cout<<"It's Null Linked List"<<endl;

    }

    while(curr->data=nullptr){
        curr=curr->next;
    }
    

}
void printll(Node* head)
{
    Node* curr=head;

    while(curr!=nullptr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}


int main()
{

Node* head=new Node(20);
head->next=new Node(30);
head->next->next=new Node(40);
head=deletefirst(head);

printll(head);
    return 0;
}