#include <iostream>
#include "boss.h"

using namespace std;

Boss::Boss(vector<Poster *> list)
{
	this->list = list;
}

void Boss::show() const
{
	for (auto x : list)
	{
		x->print();
		cout << " Cost: " << x->getCost() << endl;
	}
}
