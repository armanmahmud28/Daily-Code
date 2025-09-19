#include<iostream>
using namespace std;
class node{
public: 

int data;
node* next;

node(int newdata)
{
data = newdata;
next = nullptr;
}

};

node* deleteanyvalue(node* head,int val)
{
if(head ==nullptr)
{
    return head;
}

if(head != nullptr && head->data == val)
{
    node* temp = head;
    head = head->next;
    delete temp;
    
}

node* curr = head;

while(curr!=nullptr && curr->next!=nullptr){

    if(curr->next->data==val){
node* temp = curr->next;
curr->next = curr->next->next;
delete temp;
    }
    else{
        curr = curr->next;
    }
}

return head;

}

void print(node* head)
{
    node* curr = head;

    while(curr!=nullptr)
    {
        cout<<curr->data<< " ";

        curr = curr->next;

    }
}

int main()

{
    node* head = new node(10);

    head->next = new node(20);
    head->next->next =new node(30);
    head->next->next = new node(40);
        head->next->next->next = new node(20);
        head->next->next->next->next = new node(50);


print(head);
    head = deleteanyvalue(head,20);

    cout<<endl<<"After deletetion: ";
print(head);



}