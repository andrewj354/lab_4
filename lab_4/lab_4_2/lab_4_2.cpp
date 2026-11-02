// Лабораторна робота № 4.2. Табуляція функції однієї змінної. Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx;   // поточне значення аргументу, початок, кінець, крок
    double A, B, y;         // A = x^2*sin(4x/3); B = значення гілки; y = A + B
    const double EPS = 1e-9; // допуск для порівняння з нулем (накопичення похибки x += dx)

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk + EPS)
    {
        cout << "|" << setw(7) << setprecision(2) << x << "    |";

        if (fabs(x) < EPS)
        {
            // x = 0 не належить жодному проміжку: функція не визначена
            cout << setw(10) << "undefined" << "     |" << endl;
        }
        else
        {
            A = x * x * sin(4 * x / 3);
            if (x < -5)
                B = 1 / tan(x);                 // ctg x
            else
                if (x < 0)                      // -5 <= x < 0
                    B = 4 - x * x / 2;
                else                            // x > 0
                    B = log10(x * x) - 4 * x / 3;
            y = A + B;
            cout << setw(10) << setprecision(3) << y << "     |" << endl;
        }
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
