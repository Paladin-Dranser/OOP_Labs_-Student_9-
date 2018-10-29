#ifndef TARRAY_H
#define TARRAY_H

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 10;

template<typename typeArray> class TArray
{
	public:
		TArray(int l);
		void input();
		void output() const;
		void searchSpecializationAndOutput(std::string) const;
		void bubble();
	private:
		typeArray arr[SIZE];
		int n; // a real size of array
};

template<typename typeArray> TArray<typeArray>::TArray(int l) : n(l)
{
}

template<typename typeArray> void TArray<typeArray>::input()
{
	for (int i = 0; i < n; ++i)
		std::cin >> arr[i];
}

template<typename typeArray> void TArray<typeArray>::output() const
{
	for (int i = 0; i < n; ++i)
		std::cout << arr[i];
}

template<typename typeArray> void TArray<typeArray>::searchSpecializationAndOutput(std::string s) const
{
	for (int i = 0; i < n; ++i)
	{
		if (arr[i].getSpecialization() == s)
		{
			std::cout << arr[i];
		}
	}
}

template<typename typeArray> void TArray<typeArray>::bubble()
{
	typeArray temp;

	for (int i = 0; i < n-1; ++i)
		for (int j = i; j < n; ++j)
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}

#endif
