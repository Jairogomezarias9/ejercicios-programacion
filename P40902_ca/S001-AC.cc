#include <iostream>
#include <map>
using namespace std;

int main(){
    string nom;
    map<string,int> m;
    while(cin>>nom){
        string n;
        cin>>n;
        
        map<string,int>::iterator it=m.find(nom);
        if(n=="enters"){
            if(it!=m.end()){
                cout<<nom<<" is already in the casino"<<endl;

            }
            else{
                m[nom]=0;

            }


        }
        else if(n=="leaves"){
            if(it==m.end()){
                cout<<nom<<" is not in the casino"<<endl;
            }
            else{
                cout<<nom<<" has won "<<it->second<<endl;
                m.erase(it);


            }

        }
        else if(n=="wins"){
            int x;
            cin>>x;
            if(it==m.end()){
                cout<<nom<<" is not in the casino"<<endl;
            }
            else{
                m[nom]+=x;

            }
            
        }

    }
    cout<<"----------"<<endl;
    auto it=m.begin();
    for(it;it!=m.end();++it){
        cout<<it->first<<" is winning "<<it->second<<endl;
    }
}