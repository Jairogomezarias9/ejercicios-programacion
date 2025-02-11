#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double x;
    double i = 0;
    double j = 0;

    while (cin >> x)
    {
        cout.setf(ios::fixed);
        cout.precision(2);
        double aux = x;

        i = i + aux * aux;
        j = j + aux;
    }
    double jota=j*j;

    cout << ((1.0 / (n - 1)) * i) - ((1.0 / (n * (n - 1))) * (jota)) << endl;
}