#include <iostream>
using namespace std;
int main()
{
    double n,x;
    
    double max=0;
    double min=0;
    double suma=0;
    
      while(cin>>n){
    {
        while(cin>>x){

        if(max==0){
            max=x;
        }
        else if(max<x){
            max=x;
            x=max;
        }

        if(min==0){
            min=x;
        }
        else if(min>x){
            min=x;
            x=min;
        }

        suma=suma+x;
        
        
        }
        cout<<min<<" "<<max<<" "<<suma/n<<endl;
    }
        
    }
    
   
}