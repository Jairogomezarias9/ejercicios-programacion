#include <iostream>
using namespace std;

void bars2(int n){
    if(n==1) cout<<"*"<<endl;
    else{
        bars2(n-1);
        bars2(n-1);
        for(int i=0;i<n;++i){
            cout<<"*";
        }
    
        cout<<endl;
        
        


    }
    

}

int main(){
     int n;
     cin>>n;
     bars2(n);

}