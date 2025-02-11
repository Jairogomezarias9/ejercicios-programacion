#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        Matriu mat(m, Fila(n));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> mat[i][j];
            }
        }

        int contador = 0;

        for (int i = 0; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (mat[i][j] != mat[i][j - 1] and mat[i][j] != 0)
                {
                    if (i == 0)
                    {
                        ++contador;
                    }
                    else if (mat[i - 1][j] == 0)
                        ++contador;
                }
            }
        }
        cout << contador << endl;
    }
}