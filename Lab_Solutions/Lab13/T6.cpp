#include <iostream>
#include <string>
using namespace std;

// ----------------------------
// Custom struct for each node
// ----------------------------
struct Student
{
    int erp;
    string studentName;

    // Overload == to compare whole struct at once
    bool operator==(const Student &other) const
    {
        return (erp == other.erp && studentName == other.studentName);
    }
};

// ----------------------------
// Linked list node
// ----------------------------
struct Node
{
    Student data;
    Node *next;
};

// ------------------------------------------------
// removeDuplicates: removes later duplicates
// ------------------------------------------------
Node *removeDuplicates(Node *head)
{
    if (head == nullptr)
        return head;

    Node *curr = head;

    // Outer loop: pick each node one by one
    while (curr != nullptr)
    {
        Node *runner = curr;

        // Inner loop: remove duplicates of curr->data
        while (runner->next != nullptr)
        {
            if (runner->next->data == curr->data)
            {
                // Duplicate found → remove it
                Node *dup = runner->next;
                runner->next = runner->next->next;
                delete dup; // free memory
            }
            else
            {
                runner = runner->next;
            }
        }

        curr = curr->next;
    }

    return head;
}

// ------------------------------------------------
// Helper printing function (for demonstration)
// ------------------------------------------------
void printList(Node *head)
{
    while (head != nullptr)
    {
        cout << "{" << head->data.erp << ", \""
             << head->data.studentName << "\"} → ";
        head = head->next;
    }
    cout << "nullptr\n";
}

// ------------------------------------------------
// Example usage
// ------------------------------------------------
int main()
{
    // Build list: {101,"Ali"} → {222,"Sara"} → {101,"Ali"}
    Node *head = new Node{{101, "Ali"}, nullptr};
    head->next = new Node{{222, "Sara"}, nullptr};
    head->next->next = new Node{{101, "Ali"}, nullptr};

    cout << "Original: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "Updated: ";
    printList(head);

    return 0;
}
