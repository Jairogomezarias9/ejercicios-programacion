#include <iostream>
using namespace std;

int main() {
    int x;
    int i =0;

    while(cin>>x){
        int aux =x;

        

        i=i+aux%10;
        aux=aux/100;
        
    }
    if(i%2==0) cout<<x<<" ES TXATXI"<<endl;
    else cout<<x<<" NO ES TXATXI"<<endl;
}