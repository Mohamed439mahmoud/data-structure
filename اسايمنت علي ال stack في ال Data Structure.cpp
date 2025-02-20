// ConsoleApplication120.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class stack {
private:
	int arr[5];
	int top;
public:
	stack() {
		top = -1;
	}
	bool isEmpty() {
		return (top == -1);
	}
	bool isFull() {
		return(top == 4);
	}
	void push(int x) {
		if (isFull()){
			cout << "the stack is full\n";
			return;
		}
		else
		{
			top++;
			arr[top] = x;
			cout << "push" <<"\t"<< x << "in the stack\n";
		}
	}
	void pop(int x) {
		top--;
		cout << "pop" <<"\t"<< x << "in the stack\n";
	}
};
int main()
{
	stack s1;
	s1.push(5);
	s1.push(10);
	s1.push(11);
	s1.push(12);
	s1.push(13);
	s1.pop(13);
	s1.pop(12);
	s1.pop(11);
	s1.pop(10);
	s1.pop(5);
}

