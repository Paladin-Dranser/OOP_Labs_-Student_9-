#include "rectangleposter.h"
#include <iostream>

using namespace std;

RectanglePoster::RectanglePoster()
{
}

RectanglePoster::RectanglePoster(string advText, double area_cost, double letter_cost, double w, double h) :
	Poster(advText, area_cost, letter_cost), width(w), height(h)
{
}

double RectanglePoster::getArea() const
{
	return width * height;
}

void RectanglePoster::print() const
{
	cout << "Rectangle poster. Size: " << width << 'x' << height << '.';
	Poster::print();
}

double RectanglePoster::getPerimeter() const
{
	return (width + height) * 2.0;
}

double RectanglePoster::getWidth() const
{
	return width;
}

double RectanglePoster::getHeight() const
{
	return height;
}

void RectanglePoster::writeToFile(ostream& out) const
{
    unsigned len = advText.length() + 1;
    out.write(reinterpret_cast<const char*>(&len), sizeof(len));
    out.write(reinterpret_cast<const char*>(advText.c_str()), len);

    out.write(reinterpret_cast<const char*>(&area_cost), sizeof(area_cost));
    out.write(reinterpret_cast<const char*>(&letter_cost), sizeof(letter_cost));
    out.write(reinterpret_cast<const char*>(&width), sizeof(width));
    out.write(reinterpret_cast<const char*>(&height), sizeof(height));
}

void RectanglePoster::readFromFile(istream& in)
{
	unsigned len;
	in.read(reinterpret_cast<char*>(&len), sizeof(len));
	char* buf = new char[len];
	in.read(buf, len);
	advText = buf;
	delete[] buf;

	in.read(reinterpret_cast<char*>(&area_cost), sizeof(area_cost));
	in.read(reinterpret_cast<char*>(&letter_cost), sizeof(letter_cost));
	in.read(reinterpret_cast<char*>(&width), sizeof(width));
	in.read(reinterpret_cast<char*>(&height), sizeof(height));
}
