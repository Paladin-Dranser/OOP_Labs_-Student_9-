#ifndef FRACTION_H
#define FRACTION_H

#include <string>

using namespace std;

class Fraction
{
	public:
		void input();
		void output() const;
		void mult(int a);
		string isProper();
		Fraction operator+(const Fraction & fr); // задание 1
		bool operator==(const Fraction & fr);	 // задание 1

		friend ostream & operator<<(ostream & os, const Fraction & f); // задание 2
		friend istream & operator>>(istream & is, Fraction & f); // задание 2
	private:
		int m;
		int n;
};

#endif
