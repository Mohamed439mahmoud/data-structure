// ConsoleApplication94.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class book {
private:
    string title;
    int pages;
    static int serial;
public:
    book() {
        serial++;
    }
    int getserial() {
        return serial;
    }
};
 int book::serial = 5000;
int main()
{
    book b1;
    cout << b1.getserial();
    book b2;
    cout << b2.getserial();
    book b3;
    cout << b3.getserial();
}

