#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// Print list in forward order (recursive)
void print(Node *head)
{
    if (head == nullptr)
        return;                // Base case
    cout << head->data << " "; // Print current node
    print(head->next);         // Recurse to next
}

// Print list in reverse order (recursive)
void rprint(Node *head)
{
    if (head == nullptr)
        return;                // Base case
    rprint(head->next);        // Go to end first
    cout << head->data << " "; // Print on unwinding
}

int main()
{
    // Create example list: 1 → 2 → 3
    Node *head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    cout << "Forward: ";
    print(head);

    cout << "\nReverse: ";
    rprint(head);

    return 0;
}
