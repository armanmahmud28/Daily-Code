#include<iostream>
using namespace std;
class node{
public:
    int data;

node* next;
node(int newdata)
{
    data=newdata;
    next=nullptr;


}
};

class Mystack{
    node* top;
    public:
    Mystack()
    {
        top=nullptr;
    }

    void push(int x)
    {
        node* newnode = new node(x);

      newnode->next = top;

        top=newnode;
    }
    int pop()
    {
        if(top ==nullptr)
        {
            cout<<"Stack is Empty";
            return -1;
        }
      node* temp = top;

        top=top->next;

       
      int val=temp->data;
      delete temp;
      return val;
    }

void display()
{
    if(top == nullptr)
        {
            cout<<"Stack is Empty";
            return ;
        }

        node* curr=top;

        while(curr!=nullptr)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
}


};

int main()
{
    Mystack st;

    st.push(10);

    st.push(20);

    st.push(30);
    st.pop();
    st.push(30);
    st.display();

}