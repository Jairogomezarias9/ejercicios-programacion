#include <iostream>
using namespace std;

int main() {
 
  int x;
  double hn=0.;
  int i=1;
  cin>>x;
  
 
 
  while(i<=x){
   
   hn = hn + (1.0/double (i));
    i++;
  }
  cout<<hn<<endl;
}