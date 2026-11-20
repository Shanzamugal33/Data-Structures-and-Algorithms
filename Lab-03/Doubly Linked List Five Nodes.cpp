
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* newNode = NULL;
    Node* temp = NULL;

    int count = 0;

    // Taking five values from user
    cout << "Enter five integer values:" << endl;

    for (int i = 1; i <= 5; i++)
    {
        newNode = new Node;

        cin >> newNode->data;

        newNode->prev = NULL;
        newNode->next = NULL;

        
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Forward Traversal
    cout << "\nForward Traversal:" << endl;

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        count++;

        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Backward Traversal
    cout << "\nBackward Traversal:" << endl;

    temp = tail;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";

        temp = temp->prev;
    }

    cout << "NULL" << endl;

    
    cout << "\nTotal Nodes: " << count << endl;

    
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}

