#ifndef REGULARSTAFF_H
#define REGULARSTAFF_H

#include "staff.h"

class RegularStaff : public Staff
{
	public:
		RegularStaff(double s, double p, double b, unsigned w);
		virtual double getSalary() const;
	private:
		double base_salary;
		double percent;
		double bonus;
		unsigned workdays;
};

#endif
