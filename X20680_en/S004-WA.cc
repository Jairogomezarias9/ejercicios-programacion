#include <iostream>
#include <vector>
using namespace std;
const vector<char> LETRAS{
    {'x'},{'y'},{'z'}
};

void back(int n, int c, vector<char>& v, int k,vector<bool>& visited){
    if(v.size()==n){
        for(int i =0;i<n;++i){
            cout<<v[i];
        }
        cout<<endl;
    }
    else{
        for(const auto& x: LETRAS){
            bool valido = true;
            for (int i = 1; i <= c && v.size() >= i; ++i) {
                if (v[v.size() - i] != x) {
                    valido = true;
                    break;
                }
                valido = false;
            }
            if(valido){
                
                v.push_back(x);
                back(n,c,v,k+1,visited);
                v.pop_back();
            }

        }
    }

}

int main(){
    int n,c;
    while(cin>>n>>c){
        vector<char> v;
        vector<bool>visited(3,false);
        back(n,c,v,0,visited);
        cout<<"--------------------"<<endl;
    }
}