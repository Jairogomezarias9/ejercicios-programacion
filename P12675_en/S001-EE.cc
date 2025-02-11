#include <iostream>
#include <vector>
using namespace std;




void llegirvector(vector<int> &v)
{
    int n=v.size();
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
}

int common_elements(const vector<int>& X, const vector<int>& Y){
    int suma=0;
    int n=X.size();
    int m=Y.size();
    for(int i =0;i<n;++i){
        int num=X[i];
        for(int j=0;j<m;++j){
            if(num==Y[j]){
                suma=suma+1;
            }

        }
    }
    return suma;
}
int main(){
    int n,m;
    while(cin>>n>>m){

    vector<int> X(n);
    vector<int> Y(m);
    llegirvector(X);
    llegirvector(Y);
    cout<<common_elements(X,Y)<<endl;
    }
}


