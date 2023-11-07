#include <iostream>
using namespace std;
/*
Вариант 16 Дано вещественное число B, целое число N и набор из N вещественных чисел,
упорядоченных по возрастанию.Вывести элементы
набора вместе с числом B, сохраняя упорядоченность выводимых чисел.
*/
int main()
{
	setlocale(LC_ALL, "RU");
	double b, x;
	int n;
	cout << "Введите b:";
	cin >> b;
	cout << "Введите n:";
	cin >> n;
	while (n > 0) {
		cout << "Введите число:";
		cin >> x;
		n = n - 1;
		if (x > b) {
			cout << b << endl;
			cout << x << endl;
			break;
		}
		cout << x << endl;
	}
	while (n > 0) {
		cout << "Введите число:";
		cin >> x;
		n = n - 1;
		cout << x << endl;
	}
}
