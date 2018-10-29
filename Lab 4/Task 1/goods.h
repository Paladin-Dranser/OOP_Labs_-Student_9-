#ifndef GOODS_H
#define GOODS_H

#include <string>

using namespace std;

class Goods
{
	public:
		Goods(string n, double c);
		void setName(string n);
		string getName() const;
		void setCost(double c);
		double getCost() const;
		void display() const;
	private:
		string name;
		double cost;
};

#endif
