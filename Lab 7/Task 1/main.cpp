#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>

using namespace std;

void display(set<int> & l)
{
	for (int element : l)
    { 
        cout << element << ' '; 
    } 
	cout << endl;
}

int main()
{
	set<int> first {100, 101, 102, 103, 104}; // пункт 1
	cout << "First:\n";
	display(first); // пункт 2
	// пункт 3
	set<int>::iterator it = first.begin();
	advance(it, 2); // смещаем итератор на 2 позиции вперёд
	first.erase(it); // удаляем 3 элемент
	it = first.begin();
	// замена элемента
	first.erase(it); // удаляем 1 элемент
	first.insert(it, 130); // вставляем новый элемент
	// пункт 4
	cout << "First:\n";
	for (set<int>::iterator it = first.begin(); it != first.end(); ++it) 
	{
		cout << *it << ' ';
	}
	cout << endl;
	
	set<int> second {104, 105, 106}; // пункт 5
	// пункт 6
	int n = 2; // сколько удалить
	int del = 2; // после которого удалять
	set<int>::iterator begin_del = first.begin();
	advance(begin_del, del);
	set<int>::iterator end_del = begin_del;
	advance(end_del, n);
	first.erase(begin_del, end_del); // удаляем

	// вставляем 2 set в первый
	first.insert(second.begin(), second.end());

	// пункт 7
	cout << "First:\n";
	display(first);
	cout << "Second:\n";
	display(second);
	
	return 0;
}
