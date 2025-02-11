#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    
    int num;
    
    
    for(int i =1;i<=x;++i){
        int suma=0;
       while(cin>>num and num!=y){
           suma+=num;
       }

       string s;
       getline(cin,s);

       cout<<"La suma de la secuencia "<<i<< " es "<< suma<<endl;

    }
 

    
}