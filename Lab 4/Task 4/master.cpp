#include <iostream>
#include "master.h"

using namespace std;

Master::Master(vector<Poster *> list)
{
	this->list = list;
}

void Master::show() const
{
	for (auto x : this->list)
	{
		x->print();
		cout << endl;
	}
}
