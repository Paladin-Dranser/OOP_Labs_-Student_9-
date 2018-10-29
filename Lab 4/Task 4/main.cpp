#include <iostream>
#include <vector>
#include <fstream>
#include "circleposter.h"
#include "rectangleposter.h"
#include "master.h"
#include "boss.h"

using namespace std;

int main()
{
	std::vector<CirclePoster> circle;
	std::vector<RectanglePoster> rectangle;
	CirclePoster c1("Circle1", 5, 5, 10);
	RectanglePoster r1("Rectangle1", 5, 5, 10, 10);
	
	// регистрация плакатов
	circle.push_back(c1);
	rectangle.push_back(r1);

	cout << "Display:\n";
	for (auto & x : circle)
	{
		x.print();
		cout << endl;
	}
	for (auto & x : rectangle)
	{
		x.print();
		cout << endl;
	}

	// запись в файл
	ofstream outfile("circle.dat", ios::binary);
	c1.writeToFile(outfile);
	outfile.close();

	outfile.open("rectangle.dat", ios::binary);
	r1.writeToFile(outfile);
	outfile.close();

	// считывание с файла в вектор (копируем в конец вектора)
	ifstream infile("circle.dat", ios::binary);
	CirclePoster* tempCircle = new CirclePoster();
	tempCircle->readFromFile(infile);
	infile.close();
	circle.push_back(*tempCircle);
	delete tempCircle;

	infile.open("rectangle.dat", ios::binary);
	RectanglePoster* tempRectangle = new RectanglePoster();
	tempRectangle->readFromFile(infile);
	infile.close();
	rectangle.push_back(*tempRectangle);
	delete tempRectangle;
	
	cout << "Display:\n";
	for (auto & x : circle)
	{
		x.print();
		cout << endl;
	}
	for (auto & x : rectangle)
	{
		x.print();
		cout << endl;
	}

	cout << "\nMaster:\n";
	vector<Poster *> poster;
	poster.push_back(&circle[0]);
	poster.push_back(&rectangle[0]);
	Master master(poster);
	master.show();	
	cout << endl;

	cout << "\nBoss:\n";
	Boss boss(poster);
	boss.show();
	cout << endl;

	return 0;
}
