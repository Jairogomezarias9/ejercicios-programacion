#include <iostream>
using namespace std;

int main()
{

    int x;
    int max=0;
    while (cin >> x)
    {
        int y;
        int aux = 0;
        while (aux <= x)
        {
            cin >> y;

            if (aux == 0)
            {
                max = y;
            }
            else if (max < y)
            {
                max = y;
                y = max;
            }

            aux++;
        }
        cout << max << endl;
    }
}