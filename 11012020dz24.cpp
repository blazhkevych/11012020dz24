
/*
* Пользователь 	вводит с клавиатуры пять оценок студента.Посчитать его средний балл.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int a, b, c, d, e, f;
	cout << "Введите 1 оценку: ";
	cin >> a;
	cout << "Введите 2 оценку: ";
	cin >> b;
	cout << "Введите 3 оценку: ";
	cin >> c;
	cout << "Введите 4 оценку: ";
	cin >> d;
	cout << "Введите 5 оценку: ";
	cin >> e;
	f = (a + b + c + d + e) / 5;
	cout << "Cредний балл студента: " << f << endl;
	return 0;
}
