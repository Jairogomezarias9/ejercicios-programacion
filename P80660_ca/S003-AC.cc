#include <iostream>
using namespace std;
int main() {
    int x;
    
    int contador =0;
    while(cin>>x){
        while(x>1){

        if(x%2==0){
            x=x/2;
        }
        else if(x%2!=0){
            x=x*3+1;
        }
        ++contador;
    }
    cout<<contador<<endl;
    contador=0;
    }
}