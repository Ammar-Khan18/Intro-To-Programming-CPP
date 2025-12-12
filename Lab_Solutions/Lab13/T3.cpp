#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Insert a value at the end of the list
Node *insertEnd(Node *head, int value)
{
    Node *newNode = new Node{value, nullptr};

    // If the list is empty, new node becomes the head
    if (head == nullptr)
    {
        return newNode;
    }

    // Otherwise, traverse to the last node
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Insert new node at the end
    temp->next = newNode;
    return head;
}

int main()
{
    Node *head = nullptr;

    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);

    // Print list to verify
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
