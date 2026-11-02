#include <iostream>

using namespace std;

int main()
{
    double x;   // координата x точки
    double y;   // координата y точки
    double R;   // вхідний параметр - радіус кіл

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    // розгалуження в повній формі
    if ((-R <= x && x <= 0 && -R <= y && y <= 0) ||    // елемент A
        (0 <= x && x <= R && 0 <= y && y <= R) ||      // елемент B
        (-R <= x && x <= 0 && 0 <= y && y <= R &&       // елемент C:
            (x + R) * (x + R) + (y - R) * (y - R) >= R * R))    // поза колом
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    cin.get();
    cin.get();
    return 0;
}
