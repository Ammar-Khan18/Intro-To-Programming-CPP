#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
// Function: extract all nodes < num into a new list
Node *findLessNodes(Node *&head, int num)
{
    Node *newHead = nullptr; // Head of new list
    Node *newTail = nullptr; // Tail of new list (for appending)

    Node *curr = head;
    Node *prev = nullptr;

    while (curr != nullptr)
    {
        if (curr->data < num)
        {
            // Remove curr from original list
            Node *removed = curr;
            curr = curr->next;
            if (prev == nullptr)
            {
                // removing the head
                head = curr;
            }
            else
            {
                prev->next = curr;
            }
            // Append removed node to new list
            removed->next = nullptr;
            if (newHead == nullptr)
            {
                newHead = removed;
                newTail = removed;
            }
            else
            {
                newTail->next = removed;
                newTail = removed;
            }
        }
        else
        {
            // Move forward only if node was NOT removed
            prev = curr;
            curr = curr->next;
        }
    }

    return newHead; // may be nullptr if no nodes < num}
