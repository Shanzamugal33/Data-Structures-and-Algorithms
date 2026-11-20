
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    int value;
    int count = 0;

    // Taking five values from user
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter value " << i << ": ";
        cin >> value;

    
        newNode = new Node;

        newNode->data = value;
        newNode->next = NULL;

        
        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Displaying linked list
    cout << "\nLinked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        count++;
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Displaying total nodes
    cout << "Total Nodes: " << count << endl;

    
    temp = head;

    while (temp != NULL)
    {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}

