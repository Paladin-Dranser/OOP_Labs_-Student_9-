#ifndef JURIDICAL_H
#define JURIDICAL_H

#include "client.h"
#include <string>

using namespace std;

class Juridical : public Client
{
	public:
		Juridical();
		Juridical(unsigned id, string name, string form, unsigned long account, unsigned long account_number);
		void input();
		void show() const;
		void setForm(string f);
		void setAccount(unsigned long ac);
		void setAccountNumber(unsigned long acc);
	private:
		string form;
		unsigned long account;
		unsigned long account_number;		
};

#endif
