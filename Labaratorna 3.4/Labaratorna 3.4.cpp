// Lab_03_4.cpp
// Гайзлера Богдана
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double R;
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (((x >= -R && x <= 0) && (y >= 0 && y <= sqrt(R * R - x * x)))
		||
		(((x >= R / 2 && x <= R) && (y >= -R && y <= -2 * x + R))))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
	cin.get();
	return 0;
}