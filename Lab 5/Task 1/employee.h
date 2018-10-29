#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee
{
	public:
		string getSpecialization() const;
		friend istream& operator>>(istream& in, Employee& emp);
		friend ostream& operator<<(ostream& out, const Employee& emp);
	private:
		string specialization;
		string date;
};

#endif
