
// Lab_03_4.cpp
// Варіант 23

#include <iostream>

using namespace std;

int main()
{
    double x;   // координата x точки
    double y;   // координата y точки
    double R;   // радіус кіл

    cout << "R = ";
    cin >> R;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    // Перевірка належності точки фігурі
    if ((-R <= x && x <= 0 && -R <= y && y <= 0) ||
        (0 <= x && x <= R && 0 <= y && y <= R) ||
        (-R <= x && x <= 0 && 0 <= y && y <= R &&
            (x + R) * (x + R) + (y - R) * (y - R) >= R * R))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}
