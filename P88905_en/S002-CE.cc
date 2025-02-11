#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void llegirmatriu(Matriu& mat){
    int m=mat.size();
    int n=mat[0].size();
    for(int i =0; i<m;++i){
        for(int j=0;j<n;++j){
            cin>>mat[i][j];
        }
    }
}


int producteescalar(const Matriu &mat1,const Matriu& mat2,int i,int j){
    int suma=0;
    int n=mat1[0].size();
    for(int index =0;index<n;++i){
        suma=suma+mat1[i][index]*mat2[index][j];
    }
    return suma;
    
}

Matriu producte(const Matriu &mat1,const Matriu& mat2){
    int m=mat1.size();
    int n=mat2[0].size();
    Matriu final(m,Fila(n));
    for(int i =0;i<m;++i){
        for (int j =0;j<n;++j){
            final[i][j]=producteescalar(mat1,mat2,i,j);
        }
    }
    return final;
    
}

void escriumatriu(const Matriu& mat){
    int m=mat.size();
    int n=mat[0].size();
    for(int i =0; i<m;++i){
        cout<<mat[i][0];
        for(int j=0;j<n;++j){
            cout<<" "<<mat[i][j];
        }
        cout<<endl;
    }
    
}


int main(){
    int n,k,l;
    cin>>n>>k>>l;
    Matriu mat1(n,Fila(k));
    llegirmatriu(mat1);
    Matriu mat2(k,Fila(l));
    llegirmatriu(mat2);
    Matriu final=producte(mat1,mat2);
    escriumatriu(final);
    
}
