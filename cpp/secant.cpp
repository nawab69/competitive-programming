#include <bits/stdc++.h>
using namespace std;
double solveEquation(double coefficient[], int degree, double x)
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
    double error, x1, x2, x0, f1, f2, f0, x3;
    int n, i, iterationCount;
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
    cout << "Enter the initial points: " << endl;
    cout << "x1: ";
    cin >> x1;
    cout << endl;
    cout << "x2: ";
    cin >> x2;
    cout << endl;
    cout << "Number of iterations: ";
    cin >> iterationCount;
    cout << endl;
    while (iterationCount--)
    {
        f1 = solveEquation(arr, n, x1);
        f2 = solveEquation(arr, n, x2);
        x3 = x2 - ((f2) * (x2 - x1)) / (f2 - f1);
        x1 = x2;
        x2 = x3;
    }
    cout << "The Root is :" << x3 << endl;
    return 0;
}