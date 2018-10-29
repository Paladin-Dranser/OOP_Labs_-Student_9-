#include "contractstaff.h"

ContractStaff::ContractStaff(double r, unsigned h) :
	hour_rate(r), hours(h)
{
}

double ContractStaff::getSalary() const
{
	return hours * hour_rate;
}
