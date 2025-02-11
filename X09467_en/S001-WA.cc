#include <iostream>
#include <vector>
using namespace std;

void llegirvector(vector<int>&v){
int n=v.size();
for(int i =0;i<n;++i){
    cin>>v[i];

}
}
vector <bool> pos_rampas (const vector <int>& v){
    int n=v.size();
    vector<bool>b(n,false);
    for(int i =0;i<n-2;++i){

    if((v[i]>v[i+1] and v[i+1]>v[i+2]) or (v[i]<v[i+1] and v[i+1]<v[i+2])){
        b[i]=true;

    }
    
    }
    return b;
    

}

int pot_conflictives (const vector <bool>& B){
    int n=B.size();
    int suma=0;
    for(int i =0;i<n;++i){
        if(B[i] and B[i+1]) ++suma;
        if(B[i] and B[i+2])++suma;
    }
    return suma;
}




int main(){
    int n;
    while(cin>>n){
    vector<int>v(n);
    llegirvector(v);
    cout<<"posicions amb rampa";
    vector<bool> b = pos_rampas(v);
    for(int i =0;i<n;++i){
        if(b[i]){
            cout<<" "<<i;
        }

    }
    cout<<endl;
    cout<<"potencialment conflictives "<<pot_conflictives(b)<<endl<<"---"<<endl;
    }

        
    }


