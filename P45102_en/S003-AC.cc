#include <iostream>
using namespace std;

int operacio(){
    char x,operand;
    int a,b;
    cin>>x;
    

    if(x=='('){
        a=operacio();

    }
    else a= x-'0';


    cin>>operand;
    cin>>x;
    if(x=='('){
        b=operacio();
    }
    else b= x-'0';
    cin>>x;

    

    if(operand=='+') return a+b;
    if(operand=='-') return a-b;
     return a*b;
    

}
int main(){
    char r;
    cin>>r;
    if(r=='(')cout<<operacio()<<endl;
    else cout<<r<<endl;
}