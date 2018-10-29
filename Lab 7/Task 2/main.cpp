#include <iostream>
#include <stack>
#include <iterator>
#include <algorithm>

using namespace std;

void display(stack<int> temp)
{
	while ( !temp.empty() )
	{
		cout << temp.top() << ' ';
		temp.pop();
	}
	cout << endl;
}

int main()
{
	// пункт 1
	stack<int> first;
	first.push(100);
	first.push(101);
	first.push(103);
	first.push(104);
	first.push(105);
	// пункт 2
	cout << "First:\n";
	display(first);
	// пункт 3
	first.pop(); // удаляем верхний элемент
	first.top() = 130; // замена элемента
	// пункт 4 не выполняем через итераторы
	cout << "First:\n";
	display(first);
	// пункт 5	
	stack<int> second;
	second.push(106);
	second.push(107);
	second.push(108);
	// пункт 6
	int n = 2; // сколько удалить
	for (int i = 0; i < n; ++i)
		first.pop();
	// вставляем 2 stack в первый
	stack<int> temp(second);
	while ( !temp.empty() )
	{
		first.push( temp.top() );
		temp.pop();
	}
	// пункт 7
	cout << "First:\n";
	display(first);
	cout << "Second:\n";
	display(second);
	
	return 0;
}
