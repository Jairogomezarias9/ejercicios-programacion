#include <iostream>
using namespace std;
int main(){
    int x;
    while(cin>>x){
        int nombre =0;
        int contador=1;
        int resultat=0;
        while(x>0){
            nombre = nombre*10+(x%10);
            x=x/10;

        }
        while(nombre>0){
            resultat=resultat+((nombre%10)*contador);
            ++contador;
            nombre=nombre/10;

        }
        cout<<resultat<<endl;

    }
}