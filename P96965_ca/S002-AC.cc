#include <iostream>
using namespace std;


int suma(int x){
    if(x<10) return x;
    return (x/10)+(x%10);
}
int reduccio_digits(int x){
    if(x<10) return suma(x);
    return reduccio_digits(suma(x));
}
int main(){
    int x;
    while(cin>>x){
        cout<<reduccio_digits(x)<<endl;
    }
}