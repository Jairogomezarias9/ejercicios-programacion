#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef vector<string> Fila;
typedef vector<Fila> Matriu;

struct Persona
{
    string nom;
    int nivell;
};

void llegirstruct(vector<Persona> &p)
{
    int mida=p.size();
    for (int i = 0; i < mida; ++i)
    {
        cin >> p[i].nom;
        cin >> p[i].nivell;
    }
}

int main()
{
    int size, num1, num2;
    while (cin >> size)
    {
        cin >> num1;

        vector<Persona> israel (num1);

        llegirstruct(israel);
        cin >> num2;
        vector<Persona> palestina (num2);
        llegirstruct(palestina);

        int times = (num1 + num2) / size;
        int posI = 0;
        int posP = 0;
        Matriu mat(times, Fila(size));

        for (int i = 0; i < times; ++i)
        {
            int amountI = 0;
            int amountP = 0;
            for (int j = 0; j < size; ++j)
            {
                if (posI < num1 and posP < num2)
                {
                    if (amountP < amountI)
                    {
                        if (israel[posI].nivell <= palestina[posP].nivell)
                        {
                            mat[i][j] = palestina[posP].nom;
                            ++posP;
                            ++amountP;
                        }
                        else{
                            mat[i][j]=israel[posI].nom;
                            ++amountI;
                            ++posI;
                        }
                    }

                    else if (amountI < amountP)
                    {
                        if (israel[posI].nivell >= palestina[posP].nivell)
                        {
                            mat[i][j] = israel[posI].nom;
                            ++posI;
                            ++amountI;
                        }
                        else
                        {
                            mat[i][j] = palestina[posP].nom;
                            ++posP;
                            ++amountP;
                        }
                    }

                    else
                    {
                        if (israel[posI].nivell < palestina[posP].nivell)
                        {
                            mat[i][j] = palestina[posP].nom;
                            ++posP;
                            ++amountP;
                        }
                        else if (israel[posI].nivell > palestina[posP].nivell)
                        {
                            mat[i][j] = israel[posI].nom;
                            ++posI;
                            ++amountI;
                        }
                        else if (israel[posI].nom < palestina[posP].nom)
                        {
                            mat[i][j] = israel[posI].nom;
                            ++posI;
                            ++amountI;
                        }
                        else
                        {
                            mat[i][j] = palestina[posP].nom;
                            ++posP;
                            ++amountP;
                        }
                    }
                }
                else if (posI == num1)
                {
                    mat[i][j] = palestina[posP].nom;
                    ++posP;
                }
                else
                {
                    mat[i][j] = israel[posI].nom;
                    ++posI;
                }
            }
            // ordenació per inserció
            for (int k = 1; k < size; ++k)
            {
                if (mat[i][k - 1] > mat[i][k])
                {
                    int j = k;
                    string aux = mat[i][j];
                    while (j > 0 and mat[i][j - 1] > aux)
                    {
                        mat[i][j] = mat[i][j - 1];

                        --j;
                    }
                    mat[i][j] = aux;
                }
            }
            //fer el cout
            cout<<mat[i][0];
            for(int l=1;l<size;++l){
                cout<<" "<<mat[i][l];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}