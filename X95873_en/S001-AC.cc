#include <iostream>
using namespace std;
int main()
{
    char x;

    int contadora = 0;
    int contadorb = 0;
    int resultata = 0;
    int resultatb = 0;

    while (cin >> x)
    {

        if (x == 'a')
        {
            ++contadora;
        }

        else if (x == 'b')
        {
            ++contadorb;
        }

        else if (x == '?') //si trobem el caràcter 'a' llavors afegim les a's comptades fins al moment a la variable de resultat. També posem ambdós comptadors a 0 per tornar a começar el càlcul.
        {
            resultata=resultata+contadora;
            contadora=0;
            contadorb=0;
        }
        else if(x=='!'){ // el mateix però amb la b
            resultatb=resultatb+contadorb;
            contadorb=0;
            contadora=0;


        }
        else if(x=='.'){ //només inicialitzem els 2 comptadors a 0 per tornar a començar.
            contadora=0;
            contadorb=0;
        }
    }
    cout << resultata << " " << resultatb << endl;
}