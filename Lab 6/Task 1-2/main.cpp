#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{

	// задание 2
	Fraction A;
	cout << "Введите дробь A:\n";
	cin >> A;
	Fraction B;
	cout << "Введите дробь B:\n";
	cin >> B;
	
	cout << "Вывод дроби А:\n" << A;
	cout << "Вывод дроби B:\n" << B;

	// задание 1
	Fraction C;
	C = A + B;
	cout << "A + B = " << C << endl;

	if (A == B)
		cout << "A == B\n";
	else
		cout << "A != B\n";
	
	return 0;
}
