#ifndef MASTER_H
#define MASTER_H

#include <vector>
#include "poster.h"

using namespace std;

class Master
{
	public:
		Master(vector<Poster *> list);
		void show() const;
	private:
		vector<Poster *> list;
};

#endif
