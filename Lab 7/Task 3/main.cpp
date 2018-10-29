#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "fraction.h"

// условие для пунктов 4, 5, 11, 12
bool condition(Fraction & fr)
{
	return fr < Fraction(5, 8);
}

void display(const vector<Fraction> v)
{
	cout << "\nDisplay:\n";
	for (auto & element : v)
		cout << element;
	cout << endl;
}

using namespace std;

int main()
{
	// пункт 1
	vector<Fraction> v1(3);
	cout << "Enter fractions:\n";
	for (int i = 0; i < 3; ++i)
		cin >> v1[i];
	// пункт 2
	sort(v1.rbegin(), v1.rend());
	// пункт 3
	display(v1);
	// пункт 4
	vector<Fraction>::iterator it = find_if(v1.begin(), v1.end(), condition);
	if ( it != v1.end() )
		cout << "An element of condition '< 5/8': " << *it << endl;
	// пункт 5
	it = v1.begin();
	vector<Fraction> v2;
	while ( it != v1.end() )
	{
		it = find_if(v1.begin(), v1.end(), condition);
		if ( it != v1.end() )
		{
			v2.push_back(*it);
			v1.erase(it);
			it = v1.begin();
		}
	}
	// пункт 6
	display(v2);
	// пункт 7
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	// пункт 8
	display(v1);
	display(v2);
	// пункт 9
	vector<Fraction> v3(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	// пункт 10
	display(v3);
	// пункт 11
	unsigned count = count_if(v3.begin(), v3.end(), condition);
	cout << "Count = " << count << endl;
	// пункт 12
	it = find_if(v3.begin(), v3.end(), condition);
	if ( it != v3.end() )
		cout << "An element of condition '< 5/8': " << *it << endl;

	return 0;
}
