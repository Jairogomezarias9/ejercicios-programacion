#include <iostream>
#include <vector>
using namespace std;

void insereix(vector<double>& v){
    int n=v.size();
    for(int i =1;i<n;++i){
        int x=v[i];
        int j=i;
        while(j>0 and v[j-1]>x){
            v[j]=v[j-1];
            --j;
        }
        v[j]=x;
    }
}
int main(){

}
