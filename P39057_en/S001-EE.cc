#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

 int x;
 cin>>x;
 int i=0;

  
  while(x>i){
       double base, altura, area;
       string n;
    
     if(n=="rectangle"){
     cin>>base>>altura;
     cout<<base*altura<<endl;
     ++i;
     }
     
     else if (n=="circle"){
     cin>>area;
     cout<<area*area*M_PI<<endl;
     ++i;
     }
     
     

}
}