#include <iostream>
using namespace std;

  int main() {

 int x,y,i,s;
 cin>>x>>y;
 i=x;
 s=y;
 if(x>y){
     while(i>=y){
     cout<<i<<endl;
     i--;
     }
 }
 else if(y>x){
     while(s>=x){
         cout<<s<<endl;
         s--;
     }
 }
 else cout<<x<<endl;



  }