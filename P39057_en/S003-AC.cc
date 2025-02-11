#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
     cout.setf(ios::fixed);
     cout.precision(6);
 
    int x;
    cin >> x;
    int i = 0;

    while (i < x)
    {
        double base, altura, area;
        string n;
        cin >> n;
        if (n == "rectangle")
        {
            cin >> base >> altura;
            cout << base * altura << endl;
            ++i;
        }

        else if (n == "circle")
        {
            cin >> area;
            cout << area * area * M_PI << endl;
            ++i;
        }
    }
}
