#include <iostream>
using namespace std;
/*
Задание 16. Дано вещественное число A и целое число N (> 0).
Используя один цикл, вывести все целые степени числа A от 1 до N.
*/
int main()
{
	setlocale(LC_ALL, "RU");
	double a,x=1.0;
	int n;
	cout << "Введите А:";
	cin >> a;
	cout << "Введите N:";
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		x*=a;
		cout << x << endl;
	}
}