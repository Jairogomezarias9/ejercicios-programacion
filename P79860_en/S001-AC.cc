#include <iostream>
using namespace std;

void bars(int n){
    if(n==1){
        cout<<"*"<<endl;
    }
    else{
        
        
            cout<<string(n,'*');
        cout<<endl;
        bars(n-1);
        
        bars(n-1);
        
    }

}

int main(){
    int n;
    cin>>n;
    bars(n);
}