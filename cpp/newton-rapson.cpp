#include <bits/stdc++.h>
using namespace std;

double fun(double coefficient[], int degree, double x)
{
    double result = 0;
    for (int i = 0; i < degree; i++)
    {
        result = result + (pow(x, i) * coefficient[i]);
    }
    return result;
}

int main()
{
    long int i, j, n;
    cout << "Enter the degree of equation : " << endl;
    cin >> n;
    n++;
    double arr[n];
    // equation creater
    cout << "Enter The coefficent of the equations: " << endl;
    for (i = n - 1; i >= 0; i--)
    {
        cout << "x^" << i << " = ";
        cin >> arr[i];
        cout << endl;
    }

    // derivarive finder
    long int m = n - 1;
    double arrayOfDerivative[m];
    for (i = m - 1; i >= 0; i--)
    {
        arrayOfDerivative[i] = (arr[i + 1] * (i + 1));
    }

    double error, x1, x2, x0, f1, f2, f0;
    cout << "Enter the initial guess: " << endl;
    cout << "x1: ";
    cin >> x1;
    cout << endl;
    cout << "Enter The iteration number: ";
    long int iterationCount;
    cin >> iterationCount;
    cout << endl;

    while (iterationCount--)
    {
        f1 = fun(arr, n, x1);
        f2 = fun(arrayOfDerivative, m, x1);
        x2 = x1 - (f1 / f2);
        x1 = x2;
    }
    cout << "Root is: " << x2 << endl;
    return 0;
}