#ifndef PHYSICAL_H
#define PHYSICAL_H

#include "client.h"
#include <string>

using namespace std;

class Physical : public Client
{
	public:
		Physical();
		Physical(unsigned id, string name, unsigned long number, string series);
		void input();
		void show() const;
		void setNumberOfPassport(unsigned long number);
		void setSeriesOfPassport(string series);
	private:
		unsigned long number_of_passport;
		string series_of_passport;
};

#endif
