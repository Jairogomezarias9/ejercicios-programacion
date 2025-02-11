#include <iostream>
using namespace std;
void info_sequencia(int& suma, int& ultim){
    int n;
    cin>>n;
    while(n!=0){
        suma=suma+n;
        ultim=n;
        cin>>n;

    }
}

int main(){
    int suma;
    int ultim;
    int contador=1;
    info_sequencia(suma,ultim);

    int n;
    cin>>n;
    while(n!=0){
        int suma2=n;
        int ultim2=n;

        info_sequencia(suma2,ultim2);
        if(suma==suma2 and ultim==ultim2)++contador;
        cin>>n;
    }
    cout<<contador<<endl;

}