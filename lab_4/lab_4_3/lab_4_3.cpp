// Лабораторна робота № 4.3. Табуляція функції з параметрами. Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;         // параметри функції
    double x, xp, xk, dx;   // поточне значення аргументу, початок, кінець, крок
    double F;               // значення функції
    const double EPS = 1e-9; // допуск для порівняння дійсних чисел

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // заголовок і шапка таблиці
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|     Table of F(x)       |" << endl;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "F" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk + EPS)
    {
        cout << "|" << setw(7) << setprecision(2) << x << "    |";

        if (a < 0 && fabs(c) > EPS)             // a < 0 та c != 0
        {
            F = a * x * x + b * x + c;
            cout << setw(10) << setprecision(3) << F << "     |" << endl;
        }
        else
            if (a > 0 && fabs(c) < EPS)         // a > 0 та c = 0
            {
                if (fabs(x - b) < EPS)          // ділення на нуль
                    cout << setw(10) << "undefined" << "     |" << endl;
                else
                {
                    F = -a / (x - b);
                    cout << setw(10) << setprecision(3) << F << "     |" << endl;
                }
            }
            else                                // в інших випадках
            {
                F = a * (x + c);
                cout << setw(10) << setprecision(3) << F << "     |" << endl;
            }

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
