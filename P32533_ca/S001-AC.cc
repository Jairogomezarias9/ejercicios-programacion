#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < (x - 1) - i; j++)
        {

            cout << "+";
        }

        cout << "/";

        for (int z = 0; z < (i); z++)
        {
            cout << "*";
        }
        cout << endl;
    }
}