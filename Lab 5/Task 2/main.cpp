#include <iostream>

#include "tarray.h"
#include "student.h"

using namespace std;

int main()
{
	cout << "Enter the number of students: ";
	unsigned numberStudents;
	cin >> numberStudents;
	cin.get();
	TArray<Student> arr(numberStudents);

	arr.input();

	cout << "Enter the number of tests: ";
	unsigned numberTests;
	cin >> numberTests;

	for (unsigned i = 0; i < numberStudents; ++i)
	{
		arr[i].setMarks(numberTests);
	}

	arr.output();

	for (unsigned i = 0; i < numberStudents; ++i)
	{
		cout << arr[i].getName() << ": " << arr[i].getSumOfMarks() << endl;
	}

	cout << "Enter id of test for search: ";
	unsigned id;
	cin >> id;

	double average = 0;
	for (unsigned i = 0; i < numberStudents; ++i)
	{
		average += arr[i].getMarkForTest(id);
	}

	cout << "Average mark for " << id << " test: " << average << endl;

	return 0;
}
