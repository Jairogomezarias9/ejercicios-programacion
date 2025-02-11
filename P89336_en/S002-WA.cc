
#include <iostream>
using namespace std;
void paraula(int &posicio, int &comptador)
{
    string p;
    if (cin >> p)
    {
        ++posicio;
        paraula(posicio, comptador);
        ++comptador;
        if (comptador > posicio / 2)
        {
            cout << p << endl;
        }
    }
}
int main()
{
    int posicio = 0;
    int comptador = 1;
    paraula(posicio, comptador);
}
