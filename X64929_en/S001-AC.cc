#include <iostream>
using namespace std;
int main()
{

    char x, y, z;
    cin >> x >> y;
    int contadorhappy = 0;
    int contadorsad = 0;

    while (cin >> z)
    {
        if (x == ':' and y == '-' and z == ')')
        {
            contadorhappy++;
        }
        else if (x == '(' and y == '-' and z == ':')
        {
            contadorhappy++;
        }
        else if (x == ':' and y == '-' and z == '(')
        {
            contadorsad++;
        }
        else if (x == ')' and y == '-' and z == ':')
        {
            contadorsad++;
        }

        x = y;
        y = z;
    }

    cout<<contadorhappy<<" "<<contadorsad<<endl;
}