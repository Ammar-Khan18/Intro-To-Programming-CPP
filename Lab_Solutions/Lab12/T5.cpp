#include <iostream>
using namespace std;

// TASK 5: Node Structure with Pointer

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

void displayNode(Node *node, string label)
{
    if (node != nullptr)
    {
        cout << label << ": " << *node << endl;
    }
}

// 1. Connect two nodes
void twoNodesExample()
{
    cout << "\n===== 1. TWO CONNECTED NODES =====\n";

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);

    // Connect node1 to node2
    node1->next = node2;

    displayNode(node1, "Node 1");
    displayNode(node2, "Node 2");

    cout << "\nTraversing from Node 1 to Node 2:\n";
    cout << "Node 1 value: " << node1->value << endl;
    cout << "Following next pointer...\n";
    cout << "Node 2 value: " << node1->next->value << endl;

    delete node1;
    delete node2;
}

// 2. Make a diamond of four nodes
void diamondExample()
{
    cout << "\n===== 2. DIAMOND OF FOUR NODES =====\n";
    cout << "Structure:\n";
    cout << "       Top\n";
    cout << "      /   \\\n";
    cout << "   Left   Right\n";
    cout << "      \\   /\n";
    cout << "      Bottom\n\n";

    Node *top = new Node(1);
    Node *left = new Node(2);
    Node *right = new Node(3);
    Node *bottom = new Node(4);

    // Create diamond connections
    top->next = left;     // Top points to left
    left->next = bottom;  // Left points to bottom
    right->next = bottom; // Right points to bottom

    // Note: We can also store right in a separate field if needed
    // For this example, we'll just show the connections

    displayNode(top, "Top");
    displayNode(left, "Left");
    displayNode(right, "Right");
    displayNode(bottom, "Bottom");

    cout << "\nDiamond Path (Top -> Left -> Bottom):\n";
    cout << top->value << " -> " << top->next->value
         << " -> " << top->next->next->value << endl;

    cout << "\nAlternate Path (Right -> Bottom):\n";
    cout << right->value << " -> " << right->next->value << endl;

    delete top;
    delete left;
    delete right;
    delete bottom;
}

// 3. A circle of N nodes pointing to a central node
void circleWithCenterExample()
{
    cout << "\n===== 3. CIRCLE OF N NODES POINTING TO CENTER =====\n";

    int N = 5;
    Node *center = new Node(100);  // Central node
    Node **circle = new Node *[N]; // Array of pointers for circle nodes

    cout << "Creating " << N << " nodes in a circle, all pointing to center node.\n";
    cout << "Structure:\n";
    cout << "    N1   N2\n";
    cout << "      \\ /\n";
    cout << "  N5--C--N3\n";
    cout << "      / \\\n";
    cout << "    N4   \n\n";

    // Create circle nodes
    for (int i = 0; i < N; i++)
    {
        circle[i] = new Node(i + 1);
        circle[i]->next = center; // Each circle node points to center
    }

    displayNode(center, "Center Node");
    cout << "\nCircle Nodes:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "Circle Node " << (i + 1) << ": " << *circle[i] << endl;
    }

    cout << "\nVerifying all circle nodes point to center:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "Node " << circle[i]->value << " -> Center: "
             << circle[i]->next->value << endl;
    }

    // Additional example: Connect circle nodes to each other
    cout << "\n--- Bonus: Connecting circle nodes in sequence ---\n";
    Node *circleConnected[5];
    Node *centerConnected = new Node(100);

    for (int i = 0; i < 5; i++)
    {
        circleConnected[i] = new Node(i + 1);
    }

    // Connect in a circle: 1->2->3->4->5->1 (circular)
    for (int i = 0; i < 5; i++)
    {
        circleConnected[i]->next = circleConnected[(i + 1) % 5];
    }

    cout << "Circular linked list: ";
    Node *current = circleConnected[0];
    for (int i = 0; i < 5; i++)
    {
        cout << current->value;
        if (i < 4)
            cout << " -> ";
        current = current->next;
    }
    cout << " -> (back to " << current->value << ")\n";

    // Cleanup
    delete center;
    for (int i = 0; i < N; i++)
    {
        delete circle[i];
    }
    delete[] circle;

    delete centerConnected;
    for (int i = 0; i < 5; i++)
    {
        delete circleConnected[i];
    }
}

int main()
{
    cout << "========================================\n";
    cout << "       NODE STRUCTURE EXAMPLES\n";
    cout << "========================================\n";

    twoNodesExample();
    diamondExample();
    circleWithCenterExample();

    cout << "\n========================================\n";
    cout << "Experiment complete! Try modifying the\n";
    cout << "code to create your own node structures!\n";
    cout << "========================================\n";

    return 0;
}