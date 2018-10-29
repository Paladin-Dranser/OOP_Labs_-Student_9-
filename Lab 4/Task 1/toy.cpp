#include "toy.h"

#include <iostream>

using namespace std;

Toy::Toy(string n, double c, string m) :
	Goods(n, c), material(m)
{
}

void Toy::setMaterial(string m)
{
	material = m;
}

string Toy::getMaterial() const
{
	return material;
}

void Toy::display() const
{
	Goods::display();
	cout << "Material: " << material << endl;
}
