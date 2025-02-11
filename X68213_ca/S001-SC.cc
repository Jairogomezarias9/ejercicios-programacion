#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void insertar( vector<stack<string>> &v){
    
    string s;
    cin>>s;
    int num;
    cin>>num;
    v[num-1].push(s);

}
void eliminar( vector<stack<string>> &v){
    int num;
    cin>>num;
    int cantidad;
    cin>>cantidad;
    for(int i =0;i<cantidad;++i){
        v[num-1].pop();
    }
    

}
void escribir( vector<stack<string>> v){
     vector<stack<string>> copia;
     copia=v;
     int categoria;
     cin>>categoria;
     cout<<"Pila de la categoria "<<categoria<<endl;
     while(not copia[categoria-1].empty()){
         cout<<" "<<copia[categoria-1].top();
         copia[categoria-1].pop();
         cout<<endl;
     }
     cout<<endl;
}




int main(){
    int n;
    cin>>n;
    int categoria;
    cin>>categoria;
    vector<stack<string>> v(n);
    while(categoria!=-4){
        if(categoria==-1){
            insertar(v);
        }
        else if(categoria==-2){
            eliminar(v);


        }
        else if(categoria==-3){
            escribir(v);
        }

        cin>>categoria;

    }
}