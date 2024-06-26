#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int a)
	{
		data = a;
		next = nullptr;
	}
};

class queue {
public:
	Node* front;
	queue()
	{
		front = nullptr;
	}
	Node* create_Node(int a)
	{
		Node* newNode = new Node(a);
		if (newNode == nullptr)
		{
			cout << "Node not created" << endl;
			return nullptr;
		}
		else
		{
			return newNode;
		}
	}
	int count_Nodes()
	{
		if (front == nullptr)
			return 0;
		else if (front->next == nullptr)
			return 1;
		else
		{
			int count = 0;

			Node* current = front;
			while (current->next != nullptr)
			{
				count++;
				current = current->next;
			}
			return count + 1;
		}
	}

	void Enqueue()
	{
		int a;
		cout << "Enter the value you want to store" << endl;
		cin >> a;
		Node* newNode = create_Node(a);
		if (front == nullptr)
		{
			front = newNode;
		}

		else
		{
			Node* current = front;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = newNode;
		}
	}

	void dequeue()
	{
		if (front == nullptr)
			cout << "Linked List is Empty" << endl;
		else if (front->next == nullptr)
		{
			delete front;
			front = nullptr;
		}
		else
		{
			Node* current = front;
			front = front->next;
			delete current;
			current = nullptr;
		}
	}

	void displayList() {
		Node* current = front;
		while (current != nullptr) {
			cout << current->data << " -> ";
			current = current->next;
		}
		cout << "nullptr" << endl;
	}
	
};

int main()
{

}