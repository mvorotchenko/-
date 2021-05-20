#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, Descr, y1, y2;
    cout << "ax^4 + bx^2 + c" << endl;
    cout << "enter a: "; cin >> a;
    cout << "enter b: "; cin >> b;
    cout << "enter c: "; cin >> c;
    Descr = b * b - 4 * a * c;
    if (Descr < 0)
    {
        cout << "the discriminant is less than zero, there are no solutions!";
        return 0;
    }

    cout << "D : " << Descr << endl;
    y1 = (-1 * b + sqrt(Descr)) / (2 * a);
    cout << y1;
    y2 = (-1 * b - sqrt(Descr)) / (2 * a);
    if (Descr == 0)
    {
        cout << "the descrminant is zero, the equation has 2 solutions" << endl;
        cout << "X1: " << sqrt(y1) << " X2: " << sqrt(y1) * (-1) << endl;
        return 0;
    }
    else
    {
        cout << "X1: " << sqrt(y1) << " X2: " << sqrt(y1) * (-1) << endl << "X3: " << sqrt(y1) << " X4: " << sqrt(y1) * (-1);
    }
}
