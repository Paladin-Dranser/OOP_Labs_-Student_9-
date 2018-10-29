#include "juridical.h"
#include <iostream>

using namespace std;

Juridical::Juridical() :
	Client(), form("Formless"), account(0), account_number(0)
{
}

Juridical::Juridical(unsigned id, string name, string form, unsigned long account, unsigned long account_number) :
	Client(id, name), form(form), account(account), account_number(account_number)
{
}

void Juridical::input()
{
	Client::input();
	cout << "Enter a form: ";
	cin >> form;
	cout << "Enter an account: ";
	cin >> account;
	cout << "Enter an account number: ";
	cin >> account_number;
	cin.get();
}

void Juridical::show() const
{
	Client::show();
	cout << "Form: " << form << endl;
	cout << "Account: " << account << endl;
	cout << "Account number: " << account_number << endl;
}

void Juridical::setForm(string f)
{
	form = f;
}

void Juridical::setAccount(unsigned long ac)
{
	account = ac;
}

void Juridical::setAccountNumber(unsigned long acc)
{
	account_number = acc;
}
