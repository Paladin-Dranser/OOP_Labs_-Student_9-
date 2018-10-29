#include "circleposter.h"
#include <iostream>

using namespace std;

CirclePoster::CirclePoster()
{
}

CirclePoster::CirclePoster(string advText, double area_cost, double letter_cost, double r) :
	Poster(advText, area_cost, letter_cost), radius(r)
{
}

double CirclePoster::getArea() const
{
	return 3.14 * radius * radius;
}

void CirclePoster::print() const
{
	cout << "Circle poster. Radius: " << radius << '.';
	Poster::print();
}

double CirclePoster::getPerimeter() const
{
	return 2.0 * 3.14 * radius;
}

double CirclePoster::getRadius() const
{
	return radius;
}

void CirclePoster::writeToFile(ostream& out) const
{
    unsigned len = advText.length() + 1;
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(reinterpret_cast<const char*>(advText.c_str()), len);

    out.write(reinterpret_cast<const char*>(&area_cost), sizeof(area_cost));
    out.write(reinterpret_cast<const char*>(&letter_cost), sizeof(letter_cost));
    out.write(reinterpret_cast<const char*>(&radius), sizeof(radius));
}

void CirclePoster::readFromFile(istream& in)
{
	unsigned len;
	in.read(reinterpret_cast<char*>(&len), sizeof(len));
	char* buf = new char[len];
	in.read(buf, len);
	advText = buf;
	delete[] buf;

	in.read(reinterpret_cast<char*>(&area_cost), sizeof(area_cost));
	in.read(reinterpret_cast<char*>(&letter_cost), sizeof(letter_cost));
	in.read(reinterpret_cast<char*>(&radius), sizeof(radius));
}
