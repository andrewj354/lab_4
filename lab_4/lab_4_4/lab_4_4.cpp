// Лабораторна робота № 4.4. Табуляція функції, заданої графіком. Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159265358979323846;
    double R;               // радіус дуги
    double x, xp, xk, dx;   // поточне значення аргументу, початок, кінець, крок
    double y;               // значення функції
    const double EPS = 1e-9;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    if (R <= 0 || R > 3)
    {
        cout << "Error: R must satisfy 0 < R <= 3" << endl;
        return 1;
    }

    // заголовок і шапка таблиці
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|     Table of y(x)       |" << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk + EPS)
    {
        if (x < -7 - R)
            y = R;                                          // горизонтальна ділянка
        else
            if (x < -7 + R)
                y = R - sqrt(R * R - (x + 7) * (x + 7));    // дуга кола
            else
                if (x < -4)
                    y = R;                                  // горизонтальна ділянка
                else
                    if (x < 0)
                        y = -R * x / 4;                     // пряма
                    else
                        if (x <= PI)
                            y = sin(x);                     // синусоїда
                        else
                            y = x - PI;                     // промінь під 45 градусів

        cout << "|" << setw(7) << setprecision(2) << x << "    |"
            << setw(10) << setprecision(3) << y << "     |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
