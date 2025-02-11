#include <iostream>
using namespace std;

void bars(int n){
    
    if(n==1){
        cout<<"*"<<endl;
    }
    else{
        bars(n-1);
        cout<<string (n,'*')<<endl;
        bars(n-1);

    }
    
}
int main(){
    int n;
    while(cin>>n) bars(n);
}