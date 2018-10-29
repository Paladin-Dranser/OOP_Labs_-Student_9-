#include "regularstaff.h"

RegularStaff::RegularStaff(double s, double p, double b, unsigned w) :
	base_salary(s), percent(p), bonus(b), workdays(w)
{
}

double RegularStaff::getSalary() const
{
	return (base_salary * (1 + percent / 100.0) + bonus) * (workdays / 24.0);
}
