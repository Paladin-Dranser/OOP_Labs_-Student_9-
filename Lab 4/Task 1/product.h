#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

#include "goods.h"

using namespace std;

class Product : public Goods
{
	public:
		Product(string n, double c, string v);
		void setValidity(string v);
		string getValidity() const;
		void display() const;
	private:
		string validity;
};

#endif
