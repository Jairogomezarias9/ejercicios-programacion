#include <iostream>
using namespace std;

int main() {

    int x;
    int i=0;
    while(cin>>x){
        int divisor = x;

      i= i + divisor%10;
      divisor=divisor/100;
    }

    if(i%2==0) cout<<x<<" ES TXATXI"<<endl;
    
    else cout<<x<<" NO ES TXATXI"<<endl;
}