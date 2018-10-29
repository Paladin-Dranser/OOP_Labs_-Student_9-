#ifndef FRACTION_H
#define FRACTION_H

#include <string>

using namespace std;

class Fraction
{
	public:
		Fraction();
		Fraction(int m, int n);
		void input();
		void output() const;
		void mult(int a);
		string isProper() const;
		Fraction operator+(const Fraction & fr);
		bool operator<(const Fraction & fr);
		bool operator!=(const Fraction & fr);

		friend ostream & operator<<(ostream & os, const Fraction & f);
		friend istream & operator>>(istream & is, Fraction & f);
	private:
		int m;
		int n;
};

#endif
