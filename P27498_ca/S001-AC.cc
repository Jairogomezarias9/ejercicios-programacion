#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;
void llegirmatriu(Matriu &mat)
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

void transposa(Matriu &mat)
{
    int m = mat.size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = i+1; j < m; ++j)
        {
            int aux=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=aux;
        }
    }
}
void escriu(const Matriu & mat){
    int m=mat.size();
        for(int i =0;i<m;++i){
            cout<<mat[i][0]<<" ";
            for(int j=1;j<m;++j){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        
}



int main()
{
    int n;
    cin >> n;
    Matriu mat(n, Fila(n));
    llegirmatriu(mat);
    transposa(mat);
    escriu(mat);
}