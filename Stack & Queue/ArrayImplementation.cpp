#include<iostream>

using namespace std;

class Mystack{


    int *arr;

    int capacity;
    int top;

    public:

    Mystack(int cap)
    {
        capacity = cap;
        arr = new int[capacity];
        top=-1;
    }

    void push(int x)
    {
        if(top==capacity-1)
        {
            cout<<"stack is overflow";
            return;
        }

        arr[++top]=x;

    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is underflow"<<endl;
            return -1;

        }
        return arr[top--];
    }

   void display(){
    if(top==-1)
        {
            cout<<"stack is underflow";
            return;

        }

        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
   }

};


int main()
{

Mystack st(3);

st.pop();
st.push(4);
st.display();


}