#include <iostream>

#include "tarray.h"
#include "employee.h"

using namespace std;

int main()
{
	TArray<Employee> arr(3);

	cout << "Enter elements of array:\n";
	arr.input();

	string str;
	cout << "Enter a specialization for search: ";
	cin >> str;

	cout << endl;
	arr.searchSpecializationAndOutput(str);
	cout << endl;

	return 0;
}
