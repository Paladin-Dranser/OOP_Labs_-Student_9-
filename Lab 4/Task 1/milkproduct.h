#ifndef MILK_H
#define MILK_H

#include <string>

#include "product.h"

using namespace std;

class MilkProduct : public Product
{
	public:
		MilkProduct(string n, double c, string v, double f);
		void setFat(double f);
		double getFat() const;
		void display() const;
	private:
		double fat;
};

#endif
