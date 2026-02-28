#include <iostream>
#include <cmath>
#include <locale.h>
#define E 0.001
using namespace std;

double task1(double a, double b);
double task2(double x);
double task4(double num);

int main() {
    setlocale(LC_CTYPE, "RUS");
    int Choice;
    double a, b, x, num;

    do {
        cout << "\n========== ГЛАВНОЕ МЕНЮ ==========\n";
        cout << "1. Задание 1 - Вычисление выражения\n";
        cout << "2. Задание 2 - Сумма ряда\n";
        cout << "3. Задание 4 - Модуль числа\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> Choice;

        switch (Choice) {
        case 1: {
            cout << "\n=== Задание 1 ===\n";
            cout << "Введите a (не менее 4 значащих цифр): ";
            cin >> a;
            cout << "Введите b (не менее 4 значащих цифр): ";
            cin >> b;
            double result_1 = task1(a, b);
            cout << "Значение выражения для a = " << a << " и b = " << b << " равно " << result_1 << endl;
            break;
        }

        case 2: {
            cout << "\n=== Задание 2 ===\n";
            cout << "Введите значение x: ";
            cin >> x;

            if (fabs(x) > 1) {
                cout << "Ошибка: |x| должно быть меньше 1. Попробуйте снова.\n";
            }
            else {
                double result_2=task2(x);
                cout << "Сумма ряда для x = " << x << " равна " << result_2 << endl;
            }
            break;
        }

        case 3: {
            cout << "\n=== Задание 4 ===\n";
            cout << "Введите число: ";
            cin >> num;
            double result_4=task4(num);
            cout << "Модуль числа " << num << " равен " << result_4 << endl;
            break;
        }

        case 0:
            cout << "Выход из программы.\n";
            break;

        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }

    } while (Choice != 0);

    return 0;
}

// Функция для Задания 1
double task1(double a, double b) {
    double part1 = pow(sin(a + pow(b, 3)), 2);
    double exponent = exp(pow(a, 2) - 9.4);
    double denominator = pow(a + b, 3);
    double part2 = sqrt(exponent / denominator);
    double result = part1 * part2;
    return result;
    
}

// Функция для Задания 2
double task2(double x) {
    double sum = 0.0;
    double term = 1.0;

    while (fabs(term) > E) {
        sum += term;
        term *= -x;
    }

    return sum;
}

// Функция для Задания 4
double task4(double num) {
    double module;
    if (num < 0)
        module = num * (-1);
    else
        module = num;

    return module;
}
