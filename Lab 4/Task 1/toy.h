#ifndef TOY_H
#define TOY_H

#include <string>

#include "goods.h"

using namespace std;

class Toy : public Goods
{
	public:
		Toy(string n, double c, string m);
		void setMaterial(string m);
		string getMaterial() const;
		void display() const;
	private:
		string material;
};

#endif
