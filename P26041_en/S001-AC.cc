#include <iostream>
using namespace std;
void girar(){
    string s;
    if(cin>>s){
        girar();
        cout<<s<<endl;
    }

}

int main(){
    girar();
    
}