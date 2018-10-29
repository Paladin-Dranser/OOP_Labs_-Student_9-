#include <iostream>

using namespace std;

int main()
{
	double a, b;
	cout << "Enter 'a': ";
	cin >> a;
	cout << "Enter 'b': ";
	cin >> b;

	try
	{
		if (b == 0.0)
		{
			throw "На ноль делить нельзя!";
		}

		cout << "a / b = " << a / b << endl;
	}
	catch (const char * msg)
	{
		cout << msg << endl;
	}

	return 0;
}
