#include <iostream>
using namespace std;
int main() {
    int x;
    int i =1;
    while(cin>>x ){
        cout<<"divisors of "<<x<<": ";
      while (i<=x){
        if(x%i==0){
            cout<<i<<" ";
        }
        i++;

    }
    i=1;
    }


}