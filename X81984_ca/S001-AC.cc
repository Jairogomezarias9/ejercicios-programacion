#include <iostream>
using namespace std;
int main()
{
    double x, y, z;
    cin >> x >> y >> z;
    if (x == (y + z) / 2)
    {
        cout << "YES" << endl;
    }
    else if (y == (x + z) / 2)
    {
        cout << "YES" << endl;
    }
    else if (z == (x + y) / 2)
    {
        cout << "YES" << endl;
    }
    else cout<<"NO"<<endl;
}