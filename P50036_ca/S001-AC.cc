#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void llegirvector(vector<int> &v){
int n=v.size();
for(int i=0;i<n;++i){
    cin>>v[i];
}
}

int avalua(const vector<int>& v, int x){
    int suma=0;
    int n=v.size();
    for(int i =0;i<n;++i){
        suma=suma+v[i]*pow(x,i);
    }
    return suma;

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    llegirvector(v);
    int x;
    cin>>x;
        cout<<avalua(v,x)<<endl;
}