#include <iostream>
using namespace std;

int simpleAlternatedSum(int n){
    if(n==1) return 1;

    else{
        if(n%2==0) return simpleAlternatedSum(n-1)+(-1*n);
        return simpleAlternatedSum(n-1)+n;
    }
}
int main(){
    int n;
    while(cin>>n){
        cout<<simpleAlternatedSum(n)<<endl;
    }
}