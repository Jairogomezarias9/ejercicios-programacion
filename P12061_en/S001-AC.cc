#include <iostream>
using namespace std;

int main()
{
    string x;
    bool trobat = false;
    int contador = -1;
    while (cin >> x and x != "end")
    {

        if (x == "beginning")
        {
            trobat = true;
        }

        if (trobat)
        {
            ++contador;
        }
    }

    if (trobat and x == "end")
    {
        cout << contador << endl;
    }
    else
        cout << "wrong sequence" << endl;
}