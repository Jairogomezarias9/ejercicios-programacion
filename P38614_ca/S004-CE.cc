#include <iostream>
using namespace std;

int main() {
    int x;
    int i =0;
    int aux=x;

    while(cin>>x){
        

        

        i=i+x%10;
        x=x/100;
        
    }
    if(i%2==0) cout<<aux<<" ES TXATXI"<<endl;
    else cout<<aux<<" NO ES TXATXI"<<endl;
}