#include <iostream>
using namespace std;

int main()
{
int x;
cin>>x;
int base=2;
int contador =2;


while(base<=16){
    int i =0;
    int aux = x;
    

    cout<<"Base "<<base<<":";

    while(aux>0){
        aux=aux/contador;
        i++;
        
    }
  
  cout<<" "<<i<<" cifras."<<endl;
  base++;
  contador++;
  i=0;
 
  

}


}

