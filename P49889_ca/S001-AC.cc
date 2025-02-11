#include <iostream>
#include <vector>
using namespace std;

void back(vector<char> &consonantes,vector<char> &vocales,vector<char> &total, int n,vector<bool>& vocalvisitada,vector<bool>& consonantevisitada){
    if(total.size()==2*n){
        for(int i =0;i<2*n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(int i =0;i<n;++i){
            if((consonantevisitada[i]==false and total.size()%2==0) or total.empty()){
                total.push_back(consonantes[i]);
                consonantevisitada[i]=true;
                back(consonantes,vocales,total,n,vocalvisitada,consonantevisitada);
                consonantevisitada[i]=false;
                total.pop_back();
            }
            else if(vocalvisitada[i]==false and total.size()%2!=0){
                total.push_back(vocales[i]);
                vocalvisitada[i]=true;
                back(consonantes,vocales,total,n,vocalvisitada,consonantevisitada);
                vocalvisitada[i]=false;
                total.pop_back();

            }
        }
    }


}


int main(){
    int n;
    cin>>n;
    vector<char> vocales(n);
    vector<char> consonantes(n);
    for(int i =0;i<n;++i){
        cin>>consonantes[i];
    }
    for(int i =0;i<n;++i){
        cin>>vocales[i];
    }
    vector<bool> vocalvisitada(n,false);
    vector<bool> consonantevisitada(n,false);
    vector<char> total;
    back(consonantes,vocales,total,n,vocalvisitada,consonantevisitada);
}