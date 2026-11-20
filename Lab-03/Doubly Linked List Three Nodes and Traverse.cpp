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
	//create three nodes dynamically
	Node* head = new  Node;
	Node* second = new  Node;
	Node* third = new  Node;
	
	head->data = 10;
	head->prev = NULL;
	head->next = second;
	
	second->data = 20;
	second->prev = head;
	second->next = third;
	
	third->data = 30;
	third->prev = second;
	third->next = NULL;
	
	//forward traversal
	cout<<"Forward Traversal: ";
	Node* temp = head;
	
	while (temp != NULL)
	{
		cout<< temp->data <<" <-> ";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
	
	//backward traversal
	cout<<"Backward Traversal: ";
	temp = third;
	
	while (temp != NULL)
	{
		cout<< temp->data <<" <-> ";
		temp = temp->prev;
	}
	cout<<"NULL"<<endl;
	
	//release dynamically allocated memory
	delete head;
	delete second;
	delete third;
	
	return 0;
}
