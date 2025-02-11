#include <iostream>
using namespace std;

bool is_perfect(int n){
    int suma=1;

    for(int i=2; i<=n/2;++i){
        if(n%i==0){
            suma=suma+i;
        }
    }
    return n==suma;
}


int main() {
    int n=100;
    cout<<is_perfect(n)<<endl;

}