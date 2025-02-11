#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.precision(10);

    double x, y;
    double h1 = 0;
    double h2 = 0;
    double contador = 1;
    double contador2 = 1;

    while (cin >> x)
    {
        cin >> y;

        while (contador <= x)
        {

            h1 = h1 + 1.0 / contador;

            contador++;
        }
        while (contador2 <= y)
        {
            h2 = h2 + 1.0 / contador2;

            contador2++;
        }
        cout << (h1 - h2) << endl;
    }
}