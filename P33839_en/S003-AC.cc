#include <iostream>
using namespace std;

int main(){
    int x;
    
   
    while(cin>>x){
      cout<<"The sum of the digits of "<<x<<" is ";
      int i = 0;
      
      
      while(x!=0){
        i = i + x%10;
        x=x/10;
      }
        
        cout<<i<<"."<<endl;
    }

    
    
    
}