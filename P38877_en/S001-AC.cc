#include <iostream>
using namespace std;

void girar(int &contador){
    string s;
    if(cin>>s){
        girar(contador);
        if(contador>0){
            cout<<s<<endl;
            --contador;
        }
    }

    
    

}

int main(){
   int contador;
   cin>>contador;
   girar(contador);
}