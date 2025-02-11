#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;


void llegir(Matriu &mat)
{
    int m = mat.size();
    
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mat[i][j];
        }
    }
}

void escriu(const Matriu &mat)
{
    int m = mat.size();
    for (int i = 0; i < m; ++i)
    {
        cout << mat[i][0] << " ";
        for (int j = 1; j < m; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int producteescalar(const Matriu &mat1, const Matriu &mat2, int i, int j)
{

    int m = mat1.size();
    int suma = 0;

    for (int index = 0; index < m; ++index)
    {
        suma = suma + mat1[i][index] * mat2[index][j];
    }

    return suma;
}

Matriu producte(const Matriu &a, const Matriu &b)
{
    int m = a.size();
    
    Matriu final(m, Fila(m));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            final[i][j] = producteescalar(a, b, i, j);
        }
    }
    return final;
}

int main()
{
    int m;
    cin >> m;
    Matriu mat1(m, Fila(m));
    Matriu mat2(m,Fila(m));
    llegir(mat1);
    llegir(mat2);
    escriu(producte(mat1, mat2));
}