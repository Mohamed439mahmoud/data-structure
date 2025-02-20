// ConsoleApplication144.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
struct node {
	int data;
	node* next;
};
node* head = nullptr;
void insertnode(int value) {
	node* ptr = new node;
	node* current;
	ptr->data = value;
	if (head == nullptr)
	{
		head = ptr;
		ptr->next = nullptr;
		return;
	}
current = head;
while (current->next != nullptr) {
	current = current->next;
}
current->next = ptr;
ptr->next = nullptr;
}
void insertfirst(int value) {
	node* first = new node;
	first->data = value;
	first->next = head;
	head = first;
}
void deletenode(int x) {
	node* current = head;
	if (current->data==x)
	{
		head = current->next;
		delete(current);
	}
	else
	{
		node* pervious = head;
		while (current->data != x) {
			pervious = current;
			current = current->next;
		}
		pervious->next = current->next;
		delete(current);
	}
}
void deletefirst() {
	node* current = head;
	head = current->next;
	delete(current);
}
void display() {
	if (head==nullptr)
	{
   cout<< "can't display linked list is empty\n";
	}
	else
	{
		node* current;
		for (current = head; current != nullptr; current = current->next) {
			cout << current->data << "";

		}
		cout << "\n";
	}
}
int main()
{
	display();
	insertnode(1);
	insertnode(2);
	insertnode(3);
	insertnode(4);
	insertnode(5);
	insertnode(6);
	insertnode(7);
	insertnode(8);
	display();
	insertfirst(10);
	insertfirst(0);
	display();
	deletenode(5);
	display();
	deletenode(0);
	display();
	deletefirst();
	display();
}

