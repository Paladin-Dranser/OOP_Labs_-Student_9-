#include "employee.h"

using namespace std;

string Employee::getSpecialization() const
{
	return specialization;
}

istream& operator>>(istream& in, Employee& emp)
{
	cout << "Enter a specialization: ";
	in >> emp.specialization;
	cout << "Enter date: ";
	in >> emp.date;
}

ostream& operator<<(ostream& out, const Employee& emp)
{
	out << "Specialization: " << emp.specialization << ' '
	    << "Date: " << emp.date << endl;
}
