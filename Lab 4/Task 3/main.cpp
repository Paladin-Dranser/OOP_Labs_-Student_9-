#include <iostream>

#include "staff.h"
#include "regularstaff.h"
#include "contractstaff.h"

using namespace std;

int main()
{
	ContractStaff c1(12, 70);
	ContractStaff c2(32, 30);

	RegularStaff r1(300, 40, 200, 24);
	RegularStaff r2(100, 150, 10, 24);

	Staff* arr[4];
	arr[0] = &c1;
	arr[1] = &c2;
	arr[2] = &r1;
	arr[3] = &r2;

	for (int i = 0; i < 4; ++i)
	{
		cout << "Salary: " << arr[i]->getSalary() << endl;
	}

	return 0;
}
