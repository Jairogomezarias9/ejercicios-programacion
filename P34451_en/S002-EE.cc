#include <iostream>
using namespace std;

 int main() {

     int x;
     cin>>x;


     int n;
     int i = 0;
     while(cin>>n){
         if(x%n==0)i=i+1;
         
         else i=i+0;

     }
     cout<<i<<endl;
 }