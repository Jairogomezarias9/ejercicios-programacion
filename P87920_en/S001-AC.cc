#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> v(n);
        int suma=0;
        for(int i =0; i<n;++i){
            cin>>v[i];
            suma=suma+v[i];
        }
        bool trobat =false;

        for(int j=0; j<n; ++j){
            if(v[j]==suma-v[j]) trobat=true;
        }

        if(trobat) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}