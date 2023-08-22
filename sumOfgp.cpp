// sum of Geometric Progression
// Sn = a(1 - r^n) / (1 - r), when r ≠ 1.
#include <iostream>
#include <cmath>
using namespace std;

int sumOfGP(int a, int r, int n)
{
    if (r == 1)
        return a * n;
    else
        return a * (1 - pow(r, n)) / (1 - r);
}

int main()
{
    int a, r, n;
    cout << "Enter a, r, n: ";
    cin >> a >> r >> n;
    cout << "Sum of GP is " << sumOfGP(a, r, n) << endl;
    return 0;
}