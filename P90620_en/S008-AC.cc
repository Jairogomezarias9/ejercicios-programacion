#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    bool trobat = false;
    cin >> a;
    cin >> b;
    while (cin >> c and c != 0)
    {
        if (b > 3143 and  a<b and c < b)
            trobat = true;
        a = b;
        b = c;
    }
    if (trobat)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}