#include <iostream>
#include <string>
#include <cmath>
using namespace std;


void alterna(int n,int s){
    if(n==0){
        cout<<string(s,' ');
        cout<<"*"<<endl;

    }
    else if(n%2==0){
         alterna (n-1,s+pow(2,n-1));
        alterna(n-1,s);
       

        

    }
    else if(n%2!=0){
        
        alterna(n-1,s);
        alterna (n-1,s+pow(2,n-1));
    }

}

int main(){
    int n,s;
    while(cin>>n){
        s=0;
        alterna(n,s);
        cout<<"----------"<<endl;

    }

}