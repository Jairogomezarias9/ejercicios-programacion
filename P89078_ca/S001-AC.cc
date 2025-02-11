#include <iostream>
using namespace std;

int main(){

    int numero;
    int contador=1;
    bool trobat = false;

    while(cin>>numero and not trobat){

        if(numero%2==0)trobat=true;
        else ++contador;
    }
    cout<<contador<<endl;

}