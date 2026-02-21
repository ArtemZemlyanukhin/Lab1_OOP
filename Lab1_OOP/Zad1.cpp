#include <iostream>
#include <cmath>
#include <locale.h>
#define E 0.001
using namespace std;
int main() {
	double a, b;
	setlocale(LC_CTYPE, "RUS");
	cout << "Введите a(не менее 4 значащих цифр): ";
	cin >> a;
	cout << "Введите b(не менее 4 значащих цифр): ";
	cin >> b;
	double part1 = pow(sin(a + pow(b, 3)), 2);
	double expanent = exp(pow(a, 2) - 9.4);
	double denominator = pow(a + b, 3);
	double part2 = sqrt(expanent / denominator);
	double result = part1 * part2;
	cout << "Значение выражения для a=" << a << " и b=" << b << " равно " << result << endl;
	//return 0;
	cout << "============================================\n";
	int choice;
	double x;
	
	do {
		cout << "\n===Меню===\n";
		cout << "1. Выполнить задание\n";
		cout << "2. Выйти из задания 2\n";
		cout << "Ваш выбор: " << endl;
		cin >> choice;
		switch (choice) {
		case 1: {
			double sum = 0.0;
			double term = 1.0;
			cout << "Введите значение x: ";
			cin >> x;
			if (fabs(x) > 1) {
				cout << "|x| больше 1";
				break;
			}

			while (fabs(term) > E) {

				sum += term;
				term *= -x;

			}
			cout << "Результат для x=" << x << "==" << sum;
			break;
		}
		case 2:
			cout << "Выход из задания 2\n";
			break;

		default:
			cout << "Неверный выбор\n";
		}

		
	
	//return 0;
	cout << "\n==========================\n";
	double num;
	cout << "Введите число: ";
	cin >> num;
	double module;
	if (num < 0) module = num * (-1);
	else module = num;
	cout << "Число " << num << " равно" << module;
	} while (choice != 2);
	return 0;
}