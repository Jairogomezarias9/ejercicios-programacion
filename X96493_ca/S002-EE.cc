#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int positionDistance1(const vector<int> &v){
    int n=v.size();
    for(int i =0;i<n-1;++i){
        if(v[i]-v[i+1]==1 or v[i]-v[i+1]==-1) return i;
    }
    return 0;
}


int main(){
    int n;
    vector<int> v;
    while(cin>>n){
        v.push_back(n);
    }
    cout<<positionDistance1(v)<<endl;

}