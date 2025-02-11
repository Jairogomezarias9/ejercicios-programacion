#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int i = 0;
    int aux = 0;

    while (cin >> x)
    {

        while (i < x)
        {
            cin >> y;
            {

                if (aux == 0)
                {
                    aux = y;
                }
                else if (aux < y)
                {
                    aux=y;
                    y=aux;
                }

                ++i;
            }
            
        }
        cout << aux << endl;
        i = 0;
        aux = 0;
    }
}