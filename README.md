#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

// Прототипы функций
void task3_1();
void task3_2();
void task3_3();
void task3_4();
void task3_5();
void task3_6();
void task3_7();

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int choice;

    do {
        cout << "\n========== ЗАДАНИЕ 3 ==========\n";
        cout << "1 - Задача 1 (делители числа)\n";
        cout << "2 - Задача 2 (максимум и минимум)\n";
        cout << "3 - Задача 3 (двойной факториал)\n";
        cout << "4 - Задача 4 (двойная сумма)\n";
        cout << "5 - Задача 5 (двойная сумма с дробью)\n";
        cout << "6 - Задача 6 (сумма с факториалом)\n";
        cout << "7 - Задача 7 (сумма утроенных нечетных)\n";
        cout << "0 - Выход в главное меню\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice)
        {
        case 1: task3_1(); break;
        case 2: task3_2(); break;
        case 3: task3_3(); break;
        case 4: task3_4(); break;
        case 5: task3_5(); break;
        case 6: task3_6(); break;
        case 7: task3_7(); break;
        case 0: cout << "Выход из задания 3\n"; break;
        default: cout << "Неверный выбор!\n";
        }
    } while (choice != 0);

    return 0;
}

// ===== Задача 1: Делители числа =====
void task3_1()
{
    int n;
    cout << "\n>>> Задача 1: Делители числа\n";
    cout << "Введите n: ";
    cin >> n;

    cout << "Делители: ";
    for (int j = 1; j <= n; j++)
    {
        if (n % j == 0 && n > j)
        {
            cout << j << " ";
        }
    }
    cout << endl;
}

// ===== Задача 2: Максимум и минимум среди 100 чисел =====
void task3_2()
{
    float a, a1, a2, min, max;

    cout << "\n>>> Задача 2: Максимум и минимум среди 100 чисел\n";

    cout << "a1=";
    cin >> a1;
    cout << "a2=";
    cin >> a2;

    if (a1 > a2)
    {
        max = a1;
        min = a2;
    }
    else
    {
        max = a2;
        min = a1;
    }

    for (int i = 3; i <= 10; i++)
    {
        cout << "a" << i << "=";
        cin >> a;
        if (a < min) min = a;
        if (a > max) max = a;
    }

    float res = max - min;
    cout << "Разность: " << res << endl;
}

// ===== Задача 3: Двойной факториал =====
void task3_3()
{
    int n;
    double y = 1;

    cout << "\n>>> Задача 3: Двойной факториал\n";
    cout << "Введите n: ";
    cin >> n;

    if (n % 2 != 0)
    {
        for (int i = 1; i <= n; i += 2)
        {
            y *= i;
        }
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            y *= i;
        }
    }

    cout << "Результат: " << y << endl;
}

// ===== Задача 4: Двойная сумма (x+k)/m =====
void task3_4()
{
    int n;
    float x;
    float s, rez = 0, rezs = 0;

    cout << "\n>>> Задача 4: Двойная сумма\n";
    cout << "Введите n и x: ";
    cin >> n >> x;

    for (int k = 1; k <= n; k++)
    {
        for (int m = k; m <= n; m++)
        {
            s = (x + k) / m;
            rez += s;
        }
    }

    rezs = rezs + rez;

    cout << "Результат: " << rezs << endl;
}

// ===== Задача 5: Двойная сумма 1/(i+2j) =====
void task3_5()
{
    int n;
    double s = 0;

    cout << "\n>>> Задача 5: Двойная сумма 1/(i+2j)\n";
    cout << "Введите n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            s += 1.0 / (i + 2.0 * j);
        }
    }

    cout << "Сумма: " << s << endl;
}

// ===== Задача 6: Сумма с факториалом =====
void task3_6()
{
    double fac = 1;
    double s = 0;

    cout << "\n>>> Задача 6: Сумма с факториалом\n";

    for (int k = 1; k <= 10; k++)
    {
        double inner_sum = 0;

        for (int n = 1; n <= k; n++)
        {
            inner_sum += sin(k * n);
        }

        fac *= k;
        s += inner_sum / fac;
    }

    cout << "Результат: " << s << endl;
}

// ===== Задача 7: Сумма утроенных нечетных =====
void task3_7()
{
    int n, I, k, l;
    float s;

    cout << "\n>>> Задача 7: Сумма утроенных нечетных\n";
    cout << "Enter n: ";
    cin >> n;

    l = 0;

    for (int i = 1; i <= n; i++)
    {
        s = pow(i, 3) - 3 * i * pow(n, 2) + n;

        if ((int)s % 3 == 0)
        {
            k = (int)s % 3;
            l = l + (int)s;
        }
    }

    cout << "Result = " << l << endl;
}
