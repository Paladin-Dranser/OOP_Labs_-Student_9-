#include "client.h"
#include "physical.h"
#include "juridical.h"

#include <iostream>

using namespace std;

int main()
{
	Physical ph2(12345, "Krupski", 2019577, "MP");
	Juridical ju2(12345, "IKEA", "OOO", 345, 345);

	cout << "\nShow:\n";

	ph2.show();
	cout << endl;
	ju2.show();
	cout << endl;

	cout << "\nEdit:\n";
	
	ph2.setNumberOfPassport(11111);
	ju2.setForm("ЗАО");

	cout << "\nShow:\n";

	ph2.show();
	cout << endl;
	ju2.show();
	cout << endl;

	return 0;
}
