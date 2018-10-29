#include "address.h"
#include <iostream>

using namespace std;

Address::Address() :
	city("No"), street("No"), number_of_house(0), number_of_flat(0)
{
}

Address::Address(string c, string s, unsigned house, unsigned flat) :
	city(c), street(s), number_of_house(house), number_of_flat(flat)
{
}

void Address::input()
{
	cout << "Enter a city: ";
	cin >> city;
	cout << "Enter a street: ";
	cin >> street;
	cout << "Enter a number of house: ";
	cin >> number_of_house;
	cout << "Enter a number of flat: ";
	cin >> number_of_flat;
}

void Address::show() const
{
	cout << "City: " << city << endl;
	cout << "Street: " << street << endl;
	cout << "House: " << number_of_house << endl;
	cout << "Flat: " << number_of_flat << endl;
}

void Address::setCity(string c)
{
	city = c;
}

void Address::setStreet(string s)
{
	street = s;
}

void Address::setHouse(unsigned h)
{
	number_of_house = h;
}

void Address::setFlat(unsigned f)
{
	number_of_flat = f;
}
