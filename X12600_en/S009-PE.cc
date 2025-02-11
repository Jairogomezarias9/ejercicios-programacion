#include <iostream>
using namespace std;

int main()
{

    int x, y;
    int l = 0;

    while (cin >> x >> y)
    {

        int numerorombes = 1;
        bool primerrombo = true;

        while (l < y)
        {

            for (int i = 0; i <= x - 1; i++)

            {

                if (primerrombo)
                {
                    for (int j = 0; j < x; j++)
                        cout << " ";
                    cout << "*";
                    primerrombo = false;
                }

                else
                {

                    for (int j = 0; j < x - i; j++)
                        cout << " ";

                    if (i != 0)
                        cout << "*";

                    for (int z = 1; z < 2 * i; ++z)
                        cout << " ";

                    if (i > 0)
                        cout << "*";
                }

                cout << endl;
            }

            for (int i = x; i >= 0; i--)
            {

                for (int j = 0; j < x - i; ++j)
                    cout << " ";

                if (i != 0 or numerorombes == y)
                {
                    cout << "*";
                    for (int z = 1; z < 2 * i; z++)
                        cout << " ";
                }
                else
                    cout << "*";

                if (i != 0)
                    cout << "*" << endl;
            }

            numerorombes++;
            l++;
        }
        l = 0;
        cout << endl;
        if (l != y-1)
            cout << endl;
    }
    cout << endl;
}