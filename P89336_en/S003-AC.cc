
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
    int posicio = 1;
    int comptador = 0;
    paraula(posicio, comptador);
}
