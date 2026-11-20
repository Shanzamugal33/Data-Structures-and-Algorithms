#include <iostream>
using namespace std;

//Define structure of a node
struct Node
{
	int data;
	Node* next;
};

int main()
{
	//create three nodes dynamically
	Node* head = new  Node;
	Node* second = new  Node;
	Node* third = new  Node;
	
	//store data & connect nodes
	head->data = 10;
	head->next = second;
	
	second->data = 20;
	second->next = third;
	
    third->data = 30;
	third->next = NULL;
	
	//traverse the list from the first node
	Node* temp = head;
	
	cout<<"Linked List: ";
	while (temp != NULL)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout <<"NULL"<<endl;
	
	//release dynamically allocated memory
	delete head;
	delete second;
	delete third;
	
	
	return 0;
}


