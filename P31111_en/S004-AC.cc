#include <iostream>
using namespace std;
int main() {
    char p;
    int contador1=0;
   
    while(cin>>p and contador1>=0){
        if(p=='(') {
            contador1++; 
            
        }
        else {contador1--;}

        
        
        
    }
    
    
    if(contador1==0 ) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}