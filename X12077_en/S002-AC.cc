#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<char> Fila;
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

int diagonal(const Matriu &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);

    int contador = 0;
    for (int i = 0; i < m - 2; ++i)
    {
        int dospunts = 0;
        int guio = 0;
        for (int j = 0; j < n - 2; ++j)
        {
            if (mat[i][j] == ':')
            {
                ++v1[j];
            }
            dospunts = dospunts + v1[j];

            if (mat[i + 1][j + 1] == '-')
            {
                v2[j + 1]=v2[j + 1]+dospunts;
            }
            guio = guio + v2[j + 1];

             if (mat[i + 2][j + 2] == ')')
            {
                contador = contador + guio;
            }
        }
    }
    return contador;
}

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        Matriu mat(m, Fila(n));
        llegirmatriu(mat);
        cout << diagonal(mat) << endl;
    }
}
