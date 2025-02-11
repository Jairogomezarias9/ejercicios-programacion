#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
bool continua = true;
while(n>=0 and continua){
    
 cout<<n%10<<endl;
    n= n/10;
    if(n==0) continua=false; 
}

}