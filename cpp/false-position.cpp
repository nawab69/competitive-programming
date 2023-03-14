#include <bits/stdc++.h>
using namespace std;

double calculateEquation(double cofiicient[], int degree, double x)
{
    double result = 0;
    for (int i = 0; i < degree; i++)
    {
        result = result + (pow(x, i) * cofiicient[i]);
    }
    return result;
}

int main()
{
    double x;
    long int i, j, n;
    cout << "Enter the degree of equation : " << endl;
    cin >> n;
    n++;
    double cofiicient[n];
    cout << "Enter The coefficent of the equations: " << endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << "x^" << i << " = ";
        cin >> cofiicient[i];
        cout << endl;
    }

    double error, x1, x2, x0, f1, f2, f0;
    cout << "Enter the brackets" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << endl;
    cout << "x2: ";
    cin >> x2;
    cout << endl;
    cout << "Enter The Error: ";
    cin >> error;
    cout << endl;

    f1 = calculateEquation(cofiicient, n, x1);
    f2 = calculateEquation(cofiicient, n, x2);
    if ((f1 * f2) > 0)
    {
        cout << "x1 and x2 do not bracket any root" << endl;
    }
    else
    {
        while (1)
        {
            if (abs((x2 - x1) / x2) <= error)
            {
                cout << "Root is " << x0 << endl;
                break;
            }

            x0 = x1 - (f1 * (x2 - x1)) / (f2 - f1);
            f0 = calculateEquation(cofiicient, n, x0);
            if ((f0 * f1) < 0)
            {
                x2 = x0;
            }
            else
            {
                x1 = x0;
            }
        }
    }
    return 0;
}