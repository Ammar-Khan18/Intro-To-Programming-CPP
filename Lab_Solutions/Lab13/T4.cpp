#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Reverse a linked list (non-recursive)
Node *reverseList(Node *head)
{
    Node *reverse = nullptr; // New reversed list
    Node *first = head;      // First node of original list
    Node *second = nullptr;  // Second node (helper)

    while (first != nullptr)
    {
        second = first->next;  // Save next node
        first->next = reverse; // Insert 'first' at front of reversed list
        reverse = first;       // Move reverse to this new node
        first = second;        // Move to next node in original list
    }

    return reverse; // New head of reversed list
}
