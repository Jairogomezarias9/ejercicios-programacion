#include <iostream>
using namespace std;
void girar(){
    string s;
    cin>>s;
    if(s!="end"){
        girar();
        cout<<s<<endl;
    }

}

int main(){
    girar();
    
}