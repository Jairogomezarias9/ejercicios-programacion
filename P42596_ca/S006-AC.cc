#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void llegirmatriu(Matriu &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mat[i][j];
        }
    }
}

void min_max(const Matriu &mat, int &minim, int &maxim)
{
    int m = mat.size();
    int n = mat[0].size();

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mat[i][j] < minim)
            {
                minim = mat[i][j];
            }
            else if (mat[i][j] > maxim)
            {
                maxim = mat[i][j];
            }
        }
    }
}

int main()
{
    int m, n;
    int majordiferencia = -1;
    int contadormatrius = 0;
    int posiciomatriu = 0;
    while (cin >> m >> n)
    {
        ++contadormatrius;

        Matriu mat(m, Fila(n));
        llegirmatriu(mat);
        int minim = mat[0][0];
        int maxim = mat[0][0];
        min_max(mat, minim, maxim);
        if (maxim - minim > majordiferencia)
        {
            majordiferencia = maxim - minim;
            posiciomatriu = contadormatrius;
        }
        
    }
    cout << "la diferencia maxima es " << majordiferencia << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << posiciomatriu << endl;
}