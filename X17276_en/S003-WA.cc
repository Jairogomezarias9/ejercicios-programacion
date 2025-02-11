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
        int a=valor1;
        int b=valor2;
        while(creixent and a>0 and b>0){
            if(mat[a-1][b-1]<=mat[a][b]) creixent=false;

            --a;
            --b;

        }
        
        // diagonal superior dreta
        int c=valor1;
        int d=valor1;

         while(creixent and c>0 and d<n-1){
            if(mat[c-1][d+1]<=mat[c][d]) creixent=false;

            --c;
            ++d;

        }
        // diagonal inferior esquerra
        int e=valor1;
        int f=valor2;
         while(creixent and e<m-1 and f>0){
            if(mat[e+1][f-1]<=mat[e][f]) creixent=false;

            ++e;
            --f;

        }
        // diagonal inferior dreta
        int g=valor1;
        int h=valor2;
         while(creixent and g<m-1 and h<n-1){
            if(mat[g+1][h+1]<=mat[g][h]) creixent=false;

            ++g;
            ++h;

        }

        if(creixent) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}