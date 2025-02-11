#include <iostream>
using namespace std;

int main(){

    int x;
    int y;
    cin>>x;
    int contador=0;

    cout<<"nombres que acaben igual que "<< x<<":"<<endl;
    while(cin>>y){
        

        if(x%1000==y%1000){
            cout<<y<<endl;
            contador++;
        }
    }
    cout<<"total:  "<<contador;
    cout<<endl;

}