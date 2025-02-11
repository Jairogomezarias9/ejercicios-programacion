#include <iostream> 
using namespace std;
int main() {

    int altura,base;
    cin>>altura>>base;
    int suma=0;

    char x;
    
        for(int i =0; i<altura; ++i){
            for(int j=0; j<base; ++j){
                cin>>x;
                if(i%2 == j%2){
                suma =suma+x%'0';
                }
                
            }

        }
        cout<<suma<<endl;
    
}