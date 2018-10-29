#include "client.h"
#include <iostream>

using namespace std;

Client::Client() : identifier(0), name("Nameless")
{
	address.input();
}

Client::Client(unsigned i, string n) : identifier(i), name(n)
{
	address.input();
}

void Client::input()
{
	cout << "Enter identifier: ";
	cin >> identifier;
	cin.get();
	cout << "Enter name: ";
	getline(cin, name);
	address.input();
}

void Client::show() const
{
	cout << "Identifier: " << identifier << endl;
	cout << "Name: " << name << endl;
	address.show();
}

void Client::setIdentifier(unsigned i)
{
	identifier = i;
}

void Client::setName(string n)
{
	name = n;
}
