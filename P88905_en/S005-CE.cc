#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;
/*bool posicio_ok(const Matriu& mat,int i,int j){
 if(i<mat.size() and j<mat[0].size()) return true;
 else return false;
}
*/
void llegir(Matriu &mat)
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

void escriu(const Matriu &mat)
{
    int m = mat.size();
    int n = mat[0].size();
    for (int i = 0; i < m; ++i)
    {
        cout << mat[i][0] << " ";
        for (int j = 1; j < n; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int producteescalar(Matriu &mat1, Matriu &mat2, int i, int j)
{
    
    int n = mat2[0].size();
    int suma=0;
    
        for (int index = 0; index < n; ++index)
        {
            suma=suma+mat1[i][index]*mat2[index][j];
        }
    
    return suma;
}

Matriu productefinal(Matriu &mat1, Matriu& mat2){
    int m=mat1.size();
    int n=mat2[0].size();
    Matriu producte(m,Fila(n));
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            producte[i][j]=producteescalar(mat1,mat2,i,j);
            
        }
        
    }
    return producte;
    
}

int main()
{
    int s, k, l;
    cin >> s >> k >> l;
    Matriu mat1(s, Fila(k));
    Matriu mat2(k, Fila(l));
    llegir(mat1);
    llegir(mat2);
    escriu(productefinal(mat1,mat2));

}