// ConsoleApplication103.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int scor;
	int age;
	int rollno;
};
int main(){
	student n1 = { "mohamed",20,22,15 };
	cout << n1.name<< "\t" << n1.age << "\t" << n1.scor << "\t" << n1.rollno;
	
}