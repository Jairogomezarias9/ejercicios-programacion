#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    int n;
    int i = 0;

    while (cin >> n)
    {

        while (n != 0)
        {
            if (x % n == 0)
                i = i + 1;
        }
    }
    cout << i << endl;
}
