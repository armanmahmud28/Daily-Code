#include <iostream>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a new node with data
    Node(int x)
    {
        data = x;
        next = nullptr;
    }
};

// Given the head of a list and an int, appends
// a new node at the end and returns the head.
Node *insertAtEnd(Node *head, int x)
{

    // Create a new node
    Node *newNode = new Node(x);

    // If the Linked List is empty, make
    // the new node as the head and return
    if (head == nullptr)
    {
        return newNode;
    }

    // Store the head reference in a temporary variable
    Node *last = head;

    // Traverse till the last node
    while (last->next != nullptr)
    {
        last = last->next;
    }

    // Change the next pointer of the last node
    // to point to the new node
    last->next = newNode;

    // Return the head of the list
    return head;
}

// This function prints the contents
// of the linked list starting from the head
void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data;
        if (node->next != nullptr)
        {
            cout << " -> ";
        }
        node = node->next;
    }
    cout << endl;
}

int main()
{

    // Create a linked list:
    // 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    head = insertAtEnd(head, 6);

    printList(head);

    return 0;
}