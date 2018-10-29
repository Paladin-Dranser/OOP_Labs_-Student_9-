#include "physical.h"
#include <iostream>

using namespace std;

Physical::Physical() : Client(), number_of_passport(0), series_of_passport("KH")
{
}

Physical::Physical(unsigned id, string name, unsigned long number, string series) : Client(id, name), number_of_passport(number), series_of_passport(series)
{
}

void Physical::input()
{
	Client::input();
	cout << "Enter passport number: ";
	cin >> number_of_passport;
	cin.get();
	cout << "Enter passport series: ";
	cin >> series_of_passport;
}

void Physical::show() const
{
	Client::show();
	cout << "Passport number: " << number_of_passport << endl;
	cout << "Passport series: " << series_of_passport << endl;
}

void Physical::setNumberOfPassport(unsigned long number)
{
	number_of_passport = number;
}

void Physical::setSeriesOfPassport(string series)
{
	series_of_passport = series;
}
