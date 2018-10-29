#include <iostream>
#include "toy.h"
#include "milkproduct.h"

int main()
{
	Toy t1("tank", 100, "woods");
	MilkProduct m1("Milk", 50, "12.12.12", 1.5);

	cout << "Display:\n";
	t1.display();
	m1.display();

	cout << "Set new parameters;\n";
	t1.setMaterial("iron");
	m1.setFat(3.0);

	cout << "Display:\n";
	t1.display();
	m1.display();

	return 0;
}
