#ifndef POSTER_H
#define POSTER_H

#include <fstream>
#include <string>

using namespace std;

class Poster
{
	public:
		Poster();
		Poster(string advText, double area_cost, double letter_cost);
		virtual double getArea() const = 0;
		virtual double getPerimeter() const = 0;
		void print() const;
		double getAreaCost() const;
		double getLetterCost() const;
		double getCost() const;
		string getText() const;

		virtual void writeToFile(ostream& out) const = 0;
		virtual void readFromFile(istream& in) = 0;
	protected:
		string advText;
		double area_cost;
		double letter_cost;
};

#endif
