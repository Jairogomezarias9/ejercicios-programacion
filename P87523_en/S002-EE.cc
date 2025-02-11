#include <iostream>
using namespace std;
int main() {

    char h,e,l,i,o;
    cin>>h>>e>>l>>i>>o;
    bool trobat = false;

    while(not trobat and o!='.'){
        
        if(h=='h' and e=='e' and l=='l' and i=='l' and o=='o'){
            trobat = true;
        }
        


        h=e;
        e=l;
        l=i;
        i=o;
        cin>>o;
    }

    if(trobat) cout<<"hello"<<endl;
    else cout<<"bye"<<endl;


}