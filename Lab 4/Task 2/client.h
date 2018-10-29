#ifndef CLIENT_H
#define CLIENT_H

#include "address.h"
#include <string>

using namespace std;

class Client
{
	public:
		Client();
		Client(unsigned i, string n);
		void input();
		void show() const;
		void setIdentifier(unsigned i);
		void setName(string n);
	private:
		unsigned identifier;
		string name;
		Address address;
};

#endif
