#include <iostream>
using namespace std;

int main()
{

    char x, y, z;
    cin >> x >> y >> z;
    int espais = 0; //contador per comptar quants caràcters recorre el programa fins arribar a trobar la subsequència.
    bool trobat = false;
    //contadors per saber el nombre de vegades que es repeteix la sequència per a cada cas.
    int contadora, contadorb, contadorc, contadord, contadore, contadorf, contadorg, contadorh;
    contadora = contadorb = contadorc = contadord = contadore = contadorf = contadorg = contadorh = 0;

    while (cin >> z and not trobat)
    {

        if (x == 'a' and y == 'a' and z == 'a')
            ++contadora;

        else if (x == 'a' and y == 'a' and z == 'b')
            ++contadorb;

        else if (x == 'b' and y == 'a' and z == 'a')
            ++contadore;

        else if (x == 'b' and y == 'a' and z == 'b')
            ++contadorf;

        else if (x == 'b' and y == 'b' and z == 'a')
            ++contadorg;

        else if (x == 'b' and y == 'b' and z == 'b')
            ++contadorh;
        else if (x == 'a' and y == 'b' and z == 'a')
            ++contadorc;

        else if (x == 'a' and y == 'b' and z == 'b')
            ++contadord;

        if(contadora==2 or contadorb==2 or contadorc==2 or contadord==2 or contadore==2 or contadorf==2 or contadorg==2 or contadorh==2){
            cout<<x<<y<<z;
            trobat=true;
        }
        //per a que llegeixi la subsequència de 3 solapada a l'anterior amb només un caràcter de distància a l'inici, asignem el nou valor a la z.
        x=y;
        y=z;

        espais++;
    }
    cout<<" "<<espais<<endl;
}