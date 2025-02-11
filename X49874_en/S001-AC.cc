#include <iostream>
using namespace std;

int main()
{

    char x;
    bool continua = false;
    int contador = -1;
    int contadora = 0;
    int contadorb = 0;
    int contadorc = 0;
    int contadord = 0;

    while (cin >> x and not continua)
    {
        if (x == 'a')
        {
            ++contadora;

            if (contadora == 2)
            {
                cout << "a ";
                continua = true;
            }
        }

        else if (x == 'b')
        
            {
            ++contadorb;

            
                if (contadorb == 2)
                {
                    cout << "b " ;
                    continua = true;
                }
            }

            else if (x == 'c'){contadorc++;
            {
                if(contadorc==2){
                cout << "c " ;
                continua = true;}
            }
            }
            
            
            else if (x == 'd'){contadord++;
            {
                if(contadord==2){
                cout << "d " ;
                continua = true;}
            }
            }
             contador++;
        
        if (continua)
        {
            cout << contador << endl;
        }
    }
}