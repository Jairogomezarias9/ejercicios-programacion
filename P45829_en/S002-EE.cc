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

int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        Matriu mat(m, Fila(n));
        llegirmatriu(mat);
        int valor1, valor2;
        cin >> valor1 >> valor2;
        bool creixent=true;
        // diagonal superior esquerra
        while(creixent and valor1>0 and valor2>0){
            if(mat[valor1-1][valor2-1]<=mat[valor1][valor2]) creixent=false;

            --valor1;
            --valor2;

        }
        
        // diagonal superior dreta
         while(creixent and valor1>0 and valor2>0){
            if(mat[valor1-1][valor2+1]<=mat[valor1][valor2]) creixent=false;

            --valor1;
            ++valor2;

        }
        // diagonal inferior esquerra
         while(creixent and valor1>0 and valor2>0){
            if(mat[valor1+1][valor2-1]<=mat[valor1][valor2]) creixent=false;

            ++valor1;
            --valor2;

        }
        // diagonal inferior dreta
         while(creixent and valor1>0 and valor2>0){
            if(mat[valor1+1][valor2+1]<=mat[valor1][valor2]) creixent=false;

            --valor1;
            --valor2;

        }

        if(creixent) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}