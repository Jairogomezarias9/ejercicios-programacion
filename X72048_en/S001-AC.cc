#include <iostream>
using namespace std;

void nums(int n){
    if(n==0){
        cout<<n;
    }
    else {
        cout<<n;
        nums(n-1);
        cout<<n;
       
    }
    if(n>1){
        for(int i =n;i>1;--i){
            nums(n-1);
            cout<<n;
        }
    }

}

int main(){
    int n;
    while(cin>>n){
        nums(n);
        cout<<endl;
    }
}