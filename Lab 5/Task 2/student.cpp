#include <iostream>

#include "student.h"

using namespace std;

Student::Student()
{
}

void Student::setMarks(unsigned number)
{
	cout << "Enter " << name << "'s marks:\n";

	for (int i = 0; i < number; ++i)
	{
		unsigned temp;
		cout << "Enter the mark for " << i+1 << " test: ";
		cin >> temp;
		marks.push_back(temp);
	}
}

string Student::getName() const
{
	return name;
}

unsigned Student::getSumOfMarks() const
{
	unsigned sum = 0;

	for (unsigned i = 0; i < marks.size(); ++i)
	{
		sum += marks[i];
	}

	return sum;
}

unsigned Student::getMarkForTest(unsigned id) const
{
	return marks[id-1];
}


ostream& operator<<(ostream& out, const Student& st)
{
	out << "Name: " << st.name << "\nMarks: ";
	for (int i = 0; i < st.marks.size(); ++i)
	{
		out << st.marks[i] << ' ';
	}
	out << endl;

	return out;
}

istream& operator>>(istream& in, Student& st)
{
	cout << "Enter the name: ";
	cin >> st.name;
}
