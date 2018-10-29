#ifndef CIRCLEPOSTER_H
#define CIRCLEPOSTER_H

#include "poster.h"
#include <string>
#include <fstream>

using namespace std;

class CirclePoster : public Poster
{
	public:
		CirclePoster();
		CirclePoster(string advText, double area_cost, double letter_cost, double r);
		virtual double getArea() const override final;
		virtual double getPerimeter() const override final;
		double getRadius() const;
		void print() const;

		virtual void writeToFile(ostream& out) const;
		virtual void readFromFile(istream& in);
	private:
		double radius;
};

#endif
