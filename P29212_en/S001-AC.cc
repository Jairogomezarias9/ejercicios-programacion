#include <iostream>
#include <vector>
using namespace std;

int op(int n, int k, int m){
    //cas base
    if(k==0){
        return 1;
    }
    else{
        int x=op(n,k/2,m);
        if(k%2==0){
            return((x*x)%m);
        }
        else return ((((x*x)%m)*n)%m);
        
    }

}
int main(){
    int n,k,m;
    while(cin>>n>>k>>m){
        cout<<op(n,k,m)<<endl;
    }

}