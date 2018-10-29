#include <iostream>

#include "product.h"

using namespace std;

Product::Product(string n, double c, string v) :
	Goods(n, c), validity(v)
{
}

void Product::setValidity(string v)
{
	validity = v;
}

string Product::getValidity() const
{
	return validity;
}

void Product::display() const
{
	Goods::display();
	cout << "Validity: " << validity << endl;
}
