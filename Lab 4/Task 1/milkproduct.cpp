#include <iostream>

#include "milkproduct.h"

using namespace std;

MilkProduct::MilkProduct(string n, double c, string v, double f) :
	Product(n, c, v), fat(f)
{
}

void MilkProduct::setFat(double f)
{
	fat = f;
}

double MilkProduct::getFat() const
{
	return fat;
}

void MilkProduct::display() const
{
	Product::display();
	cout << "Fat: " << fat << "%" << endl;
}
