#ifndef CONTRACT_STAFF
#define CONTRACT_STAFF

#include "staff.h"

class ContractStaff : public Staff
{
	public:
		ContractStaff(double r, unsigned h);
		virtual double getSalary() const;
	private:
		double hour_rate;
		unsigned hours;
};

#endif
