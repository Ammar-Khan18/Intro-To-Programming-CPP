#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Create 3 nodes
    Node *head = new Node{1, nullptr};
    Node *second = new Node{2, nullptr};
    Node *third = new Node{4, nullptr};

    // Link the nodes
    head->next = second;
    second->next = third;

    // Traverse using a for loop
    cout << "Linked List: ";
    for (Node *temp = head; temp != nullptr; temp = temp->next)
    {
        cout << temp->data << " ";
    }

    // Free memory
    delete head;
    delete second;
    delete third;

    return 0;
}
