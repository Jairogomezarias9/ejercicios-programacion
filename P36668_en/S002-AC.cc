#include <iostream>
using namespace std;

int main() {

 int x,n,i,resultat;
 cin>>x;
 
 n=1;
 i=1;
 resultat=0;
  
   while(n<=x){
 
   i=n*n;
   n++;

   resultat = resultat+i;
 
 }

 
 cout<<resultat<<endl;
 
}