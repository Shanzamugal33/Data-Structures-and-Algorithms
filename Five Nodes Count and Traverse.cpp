
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Creating five nodes
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    // Storing values & Connecting nodes
    head->data = 5;
    head->next = second;
    second->data = 10;
    second->next = third;
    third->data = 15;
    third->next = fourth;
    fourth->data = 20;
    fourth->next = fifth;
    fifth->data = 25;
    fifth->next = NULL;

    // Traversal
    Node* temp = head;
    int count = 0;

    cout << "Linked List: ";

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Display total nodes
    cout << "Total Nodes: " << count << endl;

    // Free memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}

