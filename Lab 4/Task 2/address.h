#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

:using namespace std;

class Address
{
	public:
		Address();
		Address(string c, string s, unsigned house, unsigned flat);
		void input();
		void show() const;
		void setCity(string c);
		void setStreet(string s);
		void setHouse(unsigned h);
		void setFlat(unsigned f);
	private:
		string city;
		string street;
		unsigned number_of_house;
		unsigned number_of_flat;		
};

#endif
