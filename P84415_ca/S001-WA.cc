#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> m;
    string s;
    while(cin>>s){
        if(s=="minimum?"){
            if(not m.empty()){
                auto it=m.end();
                --it;
                cout<<"minimum: "<<it->first<<", "<<it->second<<" time(s)"<<endl;
            }
            else cout<<"indefinite minimum"<<endl;

        }
        else if(s=="maximum?"){
            if(not m.empty()){
                auto it=m.begin();
                cout<<"maximum: "<<it->first<<", "<<it->second<<" time(s)"<<endl;
            }
            else cout<<"indefinite minimum"<<endl;
            
        }
        else if(s=="store"){
            string t;
            cin>>t;
            ++m[t];

        }
        else if(s=="delete"){
            string t;
            cin>>t;
            ++m[t];
            
        }
    }
}