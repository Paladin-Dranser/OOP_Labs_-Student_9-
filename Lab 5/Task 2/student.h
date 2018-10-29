#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
	public:
		Student();
		void setMarks(unsigned number);
		string getName() const;
		unsigned getSumOfMarks() const;
		unsigned getMarkForTest(unsigned id) const;

		friend ostream& operator<<(ostream& out, const Student& st);
		friend istream& operator>>(istream& in, Student& st);
	private:
		string name;
		vector<unsigned> marks;
};

#endif
