#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef vector<string> Fila;
typedef vector<Fila> Matriu;

struct Persona
{
    string nom;
    int nivell;
};

void llegirstruct(int mida, vector<Persona> &p)
{
    for (int i = 0; i < mida; ++i)
    {
        cin >> p[i].nom;
        cin >> p[i].nivell;
    }
}

int main()
{
    int tamanyequip, mida1, mida2;
    while (cin >> tamanyequip)
    {
        cin >> mida1;

        vector<Persona> israel(mida1);

        llegirstruct(mida1, israel);
        cin >> mida2;
        vector<Persona> palestina(mida2);
        llegirstruct(mida2, palestina);

        int columnes = (mida1 + mida2) / tamanyequip;
        int posiciox = 0;
        int posicioy = 0;
        Matriu mat(columnes, Fila(tamanyequip));

        for (int i = 0; i < columnes; ++i)
        {
            int palestins = 0;
            int israelins = 0;
            for (int j = 0; j < tamanyequip; ++j)
            {
                if (posiciox < mida1 and posicioy < mida2)
                {
                    if (palestins < israelins)
                    {
                        if (israel[posiciox].nivell <= palestina[posicioy].nivell)
                        {
                            mat[i][j] = palestina[posicioy].nom;
                            ++posicioy;
                            ++palestins;
                        }
                    }

                    else if (israelins < palestins)
                    {
                        if (israel[posiciox].nivell >= palestina[posicioy].nivell)
                        {
                            mat[i][j] = israel[posiciox].nom;
                            ++posiciox;
                            ++israelins;
                        }
                        else
                        {
                            mat[i][j] = palestina[posicioy].nom;
                            ++posicioy;
                            ++palestins;
                        }
                    }

                    else
                    {
                        if (israel[posiciox].nivell < palestina[posicioy].nivell)
                        {
                            mat[i][j] = palestina[posicioy].nom;
                            ++posicioy;
                            ++palestins;
                        }
                        else if (israel[posiciox].nivell > palestina[posicioy].nivell)
                        {
                            mat[i][j] = israel[posiciox].nom;
                            ++posiciox;
                            ++israelins;
                        }
                        else if (israel[posiciox].nom < palestina[posicioy].nom)
                        {
                            mat[i][j] = israel[posiciox].nom;
                            ++posiciox;
                            ++israelins;
                        }
                        else
                        {
                            mat[i][j] = palestina[posicioy].nom;
                            ++posicioy;
                            ++palestins;
                        }
                    }
                }
                else if (posiciox == mida1)
                {
                    mat[i][j] = palestina[posicioy].nom;
                    ++palestins;
                }
                else
                {
                    mat[i][j] = israel[posiciox].nom;
                    ++israelins;
                }
            }
            // ordenació per inserció
            for (int k = 1; k < tamanyequip; ++k)
            {
                if (mat[i][k - 1] < mat[i][k])
                {
                    int s = k;
                    string aux = mat[i][s];
                    while (s > 0 and mat[i][s - 1] > aux)
                    {
                        mat[i][s] = mat[i][s - 1];

                        --s;
                    }
                    mat[i][s] = aux;
                }
            }
            //fer el cout
            cout<<mat[i][0];
            for(int l=1;l<tamanyequip;++l){
                cout<<" "<<mat[i][l];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}