#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    while(cin>>n){
    vector<int> v(n);
    if(n==0) cout<<endl;

    else{
    for(int i =0; i<n;++i){
        int component;
        cin>>component;
        v[i]=component;
    }
    for(int j=n-1;j>0;--j){
        cout<<v[j]<<" ";
    }
    cout<<v[0]<<endl;
    }
    } 
}