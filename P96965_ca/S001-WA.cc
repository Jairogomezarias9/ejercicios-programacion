#include <iostream>
using namespace std;
int reduccio_digits(int x){
    if(x<10) return x;
    return reduccio_digits(x/10)+(x%10);
}
int main(){
    int x;
    while(cin>>x){
        cout<<reduccio_digits(x)<<endl;
    }
}