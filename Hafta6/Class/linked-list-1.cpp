#include <iostream>
using namespace std;



class Node
{
	public:
	int data;
	Node* next;

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

void printLinkedList(Node* head)
{
	while (head != NULL)
	{
		cout << head->data  << ' ';
		head = head->next;
	}
}

void printLinkedListRecursive(Node* head)
{
	if (head == NULL)
		return;


	cout << head->data << ' ';

	printLinkedListRecursive(head->next);
}


int main()
{
	Node* head = new Node(40);
	Node* second = new Node(32);
	Node* third = new Node(98);
	Node* fourth = new Node(38);
	Node* fifth = new Node(47);
	Node* sixth = new Node(26);

	head->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = fifth;
	fifth->next = sixth;

	printLinkedListRecursive(head);


	delete head, second, third, fourth, fifth, sixth;


	return 0;
}
