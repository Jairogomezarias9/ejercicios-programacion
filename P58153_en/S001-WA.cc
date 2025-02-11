#include <iostream>
using namespace std;

int main()
{
     cout.setf(ios::fixed);
    cout.precision(10);
    double x, y;

    while (cin >> x >> y)
    {

        cout << x - y << endl;
    }
   
}