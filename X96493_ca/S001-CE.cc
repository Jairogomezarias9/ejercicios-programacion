#include <iostream>
#include <vector>
using namespace std;

int positionDistance1(const vector<int> &v){
    int n=v.size();
    for(int i =0;i<n-1;++i){
        if(v[i]-v[i+1]==1 or v[i]-v[i+1]==-1) return i;
    }
}


int main(){

}