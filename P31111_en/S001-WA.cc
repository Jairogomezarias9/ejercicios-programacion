#include <iostream>
using namespace std;
int main() {
    char p;
    int contador1=0;
    int contador2=0;
    while(cin>>p){
        if(p=='(') contador1++;
        else contador2++;
    }
    
    if(contador1==contador2) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}