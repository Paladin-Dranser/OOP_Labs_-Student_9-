#include "goods.h"

#include <iostream>

using namespace std;

Goods::Goods(string n, double c) :
	name(n), cost(c)
{
}

void Goods::setName(string n)
{
	name = n;
}

string Goods::getName() const
{
	return name;
}

void Goods::setCost(double c)
{
	cost = c;
}

double Goods::getCost() const
{
	return cost;
}

void Goods::display() const
{
	cout << "Name: " << name << endl
	     << "Cost: " << cost << endl;
}
