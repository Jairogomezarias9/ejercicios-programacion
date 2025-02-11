#include <iostream>
using namespace std;
void girar(){
    string s;
    bool finalitza=false;
    if(s=="end"){
        finalitza =true;
    }
    else if(not finalitza and cin>>s){
        girar();
        cout<<s<<endl;


    }

}

int main(){
    girar();
    
}