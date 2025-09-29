#include<iostream>
using namespace std;
class Myqueue{
int *arr;

int capacity;
int size;

public:
Myqueue(int c) {
        capacity = c;
        arr = new int[capacity];
        size = 0;
    }

void enqueu(int x)
{
    if(size == capacity)
    {
        cout<<"Queue is full";
        return;
    }

    arr[size] = x;
    size++;
}
void dequeu()
{
    if(size==0)
    {
        cout<<"Queue is empty";
        return;
    }

    for(int i=1;i<size;i++)
    {
        arr[i-1] = arr[i];
    }
    size--;
}
void display() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main()
{
Myqueue qq(5);

qq.enqueu(10);

qq.enqueu(20);

qq.enqueu(30);
qq.dequeu();
qq.display();


}