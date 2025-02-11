#include <iostream>
using namespace std;

int main(){

      int x;
      
     int par=0;
     int impar=0;
     int s=1;
     int n=1;
     while(cin>>x){
        while(x>0){
        
             if(x%10!=0 and x%2==0){

                par = par + (x%10)*n;
                
                n=n*10;
                x=x/10;
                 }

        
              else if(x%10!=0 and x%2!=0){
              
              impar = impar + (x%10)*s;
              s=s*10;
              x=x/10;
              }
              
              else {x=x/10;}

        }
          
        }
        int primera_resposta = impar*n +par;
        int segona_resposta = primera_resposta*2;
        cout<< primera_resposta <<" "<< segona_resposta<< endl;
        
      
   
}