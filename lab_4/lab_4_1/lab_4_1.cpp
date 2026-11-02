// Лабораторна робота № 4.1. Цикли. Варіант 23
#include <iostream>
#include <cmath>

using namespace std;

// Доданок суми для заданого i
double term(int i)
{
    return (cos(i / 2.0) + sin(2.0 * i)) / (1 + sin(cos((double)i)));
}

int main()
{
    int N;      // верхня межа суми (N >= 3)
    int i;      // параметр циклу (індекс підсумовування)
    double S;   // сума

    cout << "N = "; cin >> N;

    // 1) цикл while(...) { ... }
    S = 0;
    i = 3;
    while (i <= N)
    {
        S += term(i);
        i++;
    }
    cout << "while      : S = " << S << endl;

    // 2) цикл do { ... } while(...);
    S = 0;
    if (N >= 3)
    {
        i = 3;
        do {
            S += term(i);
            i++;
        } while (i <= N);
    }
    cout << "do..while  : S = " << S << endl;

    // 3) цикл for(...; ...; i++) { ... }
    S = 0;
    for (i = 3; i <= N; i++)
    {
        S += term(i);
    }
    cout << "for (i++)  : S = " << S << endl;

    // 4) цикл for(...; ...; i--) { ... }
    S = 0;
    for (i = N; i >= 3; i--)
    {
        S += term(i);
    }
    cout << "for (i--)  : S = " << S << endl;

    return 0;
}
