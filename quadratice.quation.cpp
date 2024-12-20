//3.	Write a program to calculate the roots of the quadratic equation ax2 + bx + c = 0 where a, b and c are known.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, c, d, x1, x2;
    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }
    else
    {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-d) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
