#ifndef BOSS_H
#define BOSS_H

#include <vector>
#include "poster.h"

using namespace std;

class Boss
{
	public:
		Boss(vector<Poster *> list);
		void show() const;
	private:
		vector<Poster *> list;
};

#endif
