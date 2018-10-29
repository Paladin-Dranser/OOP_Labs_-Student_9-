#include "poster.h"
#include <iostream>

using namespace std;

Poster::Poster()
{
}

Poster::Poster(string advText, double area_cost, double letter_cost) :
	advText(advText), area_cost(area_cost), letter_cost(letter_cost)
{
}

void Poster::print() const
{
	cout << "Text: " << advText << ". Area: " << getArea();
}

double Poster::getAreaCost() const
{
	return area_cost * getArea();
}

double Poster::getLetterCost() const
{
	return letter_cost * advText.size();
}

double Poster::getCost() const
{
	return getAreaCost() + getLetterCost();
}

string Poster::getText() const
{
	return advText;
}
