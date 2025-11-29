#include <iostream>
using namespace std;

// TASK 6: Building a Node Chain (Linked List)

struct Node
{
    int value;
    Node *next;

    // Constructor for easy initialization
    Node(int val) : value(val), next(nullptr) {}

    // Overload << operator to display node value and next pointer address
    friend ostream &operator<<(ostream &os, const Node &n)
    {
        os << "Node[value: " << n.value << ", next: " << n.next << "]";
        return os;
    }
};

// Function to append a new node at the end of the chain
void append(Node *&head, int val)
{
    // Step 1: Create a new node
    Node *node = new Node(val);
    node->next = nullptr;

    // Step 2: Add node to the end of chain
    // Case 1: Chain is empty
    if (head == nullptr)
    {
        head = node;
        return;
    }

    // Case 2: Chain already has elements
    // Find the end of the chain
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    // Add the new node at the end
    temp->next = node;
}

// Function to print all nodes in the chain
void print(Node *head)
{
    if (head == nullptr)
    {
        cout << "Chain is empty." << endl;
        return;
    }

    cout << "Chain contents: ";
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value;
        if (temp->next != nullptr)
        {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << " -> nullptr" << endl;
}

// Function to clear the entire chain and free memory
void clear(Node *&head)
{
    Node *current = head;

    while (current != nullptr)
    {
        Node *temp = current;    // Store current node
        current = current->next; // Move to next node
        delete temp;             // Delete the stored node
    }

    head = nullptr; // Set head to nullptr to indicate empty chain
    cout << "Chain cleared and memory freed." << endl;
}

// Additional helper function to display chain with details
void printDetailed(Node *head)
{
    if (head == nullptr)
    {
        cout << "Chain is empty." << endl;
        return;
    }

    cout << "\nDetailed Chain View:\n";
    cout << "-------------------\n";
    Node *temp = head;
    int position = 0;

    while (temp != nullptr)
    {
        cout << "Position " << position << ": " << *temp << endl;
        temp = temp->next;
        position++;
    }
    cout << "-------------------\n";
}

// BONUS: Function to delete a node with a specific value
void deleteByValue(Node *&head, int val)
{
    // Case 1: Chain is empty
    if (head == nullptr)
    {
        cout << "Chain is empty. Cannot delete." << endl;
        return;
    }

    // Case 2: Node to delete is the head
    if (head->value == val)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted node with value " << val << " from head." << endl;
        return;
    }

    // Case 3: Node to delete is in the middle or end
    Node *current = head;
    while (current->next != nullptr && current->next->value != val)
    {
        current = current->next;
    }

    // If we found the node
    if (current->next != nullptr)
    {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
        cout << "Deleted node with value " << val << "." << endl;
    }
    else
    {
        cout << "Node with value " << val << " not found." << endl;
    }
}

// BONUS: Function to delete a node at a specific position
void deleteAtPosition(Node *&head, int position)
{
    // Case 1: Chain is empty
    if (head == nullptr)
    {
        cout << "Chain is empty. Cannot delete." << endl;
        return;
    }

    // Case 2: Delete head (position 0)
    if (position == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted node at position " << position << "." << endl;
        return;
    }

    // Case 3: Delete at specific position
    Node *current = head;
    int currentPos = 0;

    // Traverse to position - 1
    while (current->next != nullptr && currentPos < position - 1)
    {
        current = current->next;
        currentPos++;
    }

    // Check if position exists
    if (current->next == nullptr)
    {
        cout << "Position " << position << " does not exist." << endl;
        return;
    }

    Node *temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Deleted node at position " << position << "." << endl;
}

int main()
{
    cout << "========================================\n";
    cout << "    BUILDING A NODE CHAIN (LINKED LIST)\n";
    cout << "========================================\n\n";

    // Create an empty chain
    Node *head = nullptr;

    cout << "Step 1: Initialize empty chain\n";
    print(head);

    // Append values to the chain
    cout << "\nStep 2: Appending values to the chain\n";
    cout << "Appending 10...\n";
    append(head, 10);
    print(head);

    cout << "\nAppending 20...\n";
    append(head, 20);
    print(head);

    cout << "\nAppending 30...\n";
    append(head, 30);
    print(head);

    cout << "\nAppending 40...\n";
    append(head, 40);
    print(head);

    cout << "\nAppending 50...\n";
    append(head, 50);
    print(head);

    // Print detailed view
    printDetailed(head);

    return 0;
}