#include <iostream>
#include <cmath>
using namespace std;
double dist_or(double x, double y)
{
    double d;
    d = sqrt(x * x + y * y);
    return d;
}
int main()
{
    cout.setf(ios::fixed);
    cout.precision(3);
    double x, y;
    cin >> x >> y;
    cout << dist_or(x, y) << endl;
}