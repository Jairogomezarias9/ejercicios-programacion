#include <iostream>
using namespace std;
int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);
    double x;
    double divisor = 0;
    double i = 0;
    while (cin >> x)
    {
        ++divisor;
        i = i + x;
    }
    cout << i / divisor << endl;
}