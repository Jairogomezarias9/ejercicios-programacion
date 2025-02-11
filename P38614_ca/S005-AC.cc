#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int i =0;
    int aux=x;

    while(x>0){
        

        

        i=i+x%10;
        x=x/100;
        
    }
    if(i%2==0) cout<<aux<<" ES TXATXI"<<endl;
    else cout<<aux<<" NO ES TXATXI"<<endl;
}