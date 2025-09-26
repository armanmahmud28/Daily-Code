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
 Node* insertafter(int newdata,Node* head,int key)
 {
    Node* curr = head;

    while(curr!=nullptr){
        if(curr->data==key){
            break;
        }
        curr=curr->next;
    }
if(curr==nullptr){
cout<<"Not Able";
}

Node* newnode=new Node(newdata);

newnode->next=curr->next;
curr->next=newnode;

return head;


 }

 void printll(Node* head)
 {
    Node* curr=head;

    while(curr!=nullptr)
    {
        cout<<curr->data<<"  ";
        curr=curr->next;
    }
 }

int main(){
Node* head=new Node(40);

head->next=new Node(60);
head->next->next=new Node(70);

head->next->next->next=new Node(80);

printll(head);

head=insertafter(50,head,1);
printll(head);

}