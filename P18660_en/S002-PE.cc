#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> Fila;
typedef vector<Fila> Matriu;

bool posicio_ok(const Matriu &mat, int i, int j)
{
    if (i < mat.size() and j < mat[0].size())
        return true;
    else
        return false;
}

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

void escriumatriu( Matriu& mat){
    int n=mat[0].size();
    int m=mat.size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
             cout<< mat[i][j]<<' ';
        }
        cout<<endl;
    }

}

char majuscula(char c){
    return 'A' +(c-'a');
}

void comprovarnomvertical(Matriu& mat, const string& s, int i ,int j){
    int k=0;
    bool seguent=true;
    while(seguent and k<s.size()){
        int pos_i = i+k;
        
        
      if(pos_i<mat.size()){
          char r=mat[pos_i][j];
          if(r==s[k] or r==majuscula(s[k])){
              seguent=true;
          }
          else seguent=false;

      


        if(k==s.size()-1 and seguent){
            for(int u=0;u<s.size();++u){
            if(posicio_ok(mat,pos_i+u,j) and mat[pos_i+u][j]>'Z' ){
                mat[pos_i+u][j]=majuscula(mat[pos_i+u][j]);
            }
            }
        }


        }
        ++k;
    }
}
void comprovarnomhoritzontal(Matriu& mat, const string& s, int i ,int j){
    int k=0;
    bool seguent=true;
    while(seguent and k<s.size()){
        int pos_j = j+k;
        
        
      if(pos_j<mat[0].size()){
          char r=mat[i][pos_j];
          if(r==s[k] or r==majuscula(s[k])){
              seguent=true;
          }
          else seguent=false;

      


        if(k==s.size()-1 and seguent){
            for(int u=0;u<s.size();++u){
            if(posicio_ok(mat,i,pos_j+u) and mat[i][pos_j+u]>'Z' ){
                mat[i][pos_j+u]=majuscula(mat[i][pos_j+u]);
            }
            }


        }
        }
        ++k;
    }
}

void comprovarnomdiagonal(Matriu& mat, const string& s, int i ,int j){
    int k=0;
    bool seguent=true;
    while(seguent and k<s.size()){
        int pos_i = i+k;
        int pos_j = j+k;
        
        
      if(pos_i<mat.size() and pos_j<mat[0].size()){
          char r=mat[pos_i][pos_j];
          if(r==s[k] or r==majuscula(s[k])){
              seguent=true;
          }
          else seguent=false;

      


        if(k==s.size()-1 and seguent){
            for(int u =0;u<s.size();++u){
            if(posicio_ok(mat,pos_i+u,pos_j+u) and mat[pos_i+u][pos_j+u]>'Z' ){
                mat[pos_i+u][pos_j+u]=majuscula(mat[pos_i+u][pos_j+u]);
            }
            }

        }

        }
        ++k;
    }
}


int main()
{
    int p, m, n;
    int w=0;
    while (cin >> p >> m >> n)
    {

        vector<string> s(p);
         for (int i = 0; i < p; ++i)
        {
            cin >> s[i];
        }
        Matriu mat(m, Fila(n));
        llegirmatriu(mat);
        for (int k = 0; k < p; ++k)
        {
            string nom = s[k];
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    char r;
                    r = mat[i][j];
                    if (nom[0] == r or majuscula(nom[0])==r)
                    {
                        comprovarnomvertical(mat,nom,i,j);
                        comprovarnomhoritzontal(mat,nom,i,j);
                        comprovarnomdiagonal(mat,nom,i,j);

                    }
                }
            }
        }
        if(w!=0)cout<<endl;
        escriumatriu(mat);
        ++w;
        
    }
}