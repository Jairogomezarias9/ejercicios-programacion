#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriu;
typedef vector<int> Filita;
typedef vector<Filita> Matriz;

void llegirmatriu(Matriu &mat){
    int m=mat.size();
    int n=mat[0].size();
    for(int i =0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>mat[i][j];
        }
    }
}

int sumafilascolumnas(const Matriu& mat,int i, int j){
    int m=mat.size();
    int n=mat[0].size();
    char numero=mat[i][j];
    int suma=0;
    for(int s=0;s<n;++s){
        if(mat[i][s]==numero){
            ++suma;
        }
    }
    for(int k=0;k<m;++k){
        if(mat[k][j]==numero){
            ++suma;
        }
    }

    return suma;



}

Matriz calcularmat(const Matriu& mat){
    int m=mat.size();
    int n=mat[0].size();
    Matriz final(m,Filita(n));
    for(int i =0;i<m;++i){
        for(int j=0;j<n;++j){
            final[i][j]=sumafilascolumnas(mat,i,j);
        }
    }
    return final;

}
void escriumatriu(const Matriz& mat){
    int m=mat.size();
    int n=mat[0].size();
    for(int i =0;i<m;++i){
        
        for(int j=0;j<n;++j){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}


int main(){
    int n,m;
    while(cin>>m>>n){
    Matriu mat(m,Fila(n));
    llegirmatriu(mat);

    Matriz final=calcularmat(mat);
    escriumatriu(final);
    cout<<endl;
    }

}