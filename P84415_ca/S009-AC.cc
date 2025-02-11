#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    map<string,int> m;

    while(cin>>s){
        if(s=="minimum?"){
            if(m.empty()){
                cout<<"indefinite minimum"<<endl;
            }
            else{
                auto it =m.begin();
                cout<<"minimum: "<<it->first<<", "<<it->second<<" time(s)"<<endl;
            }


        }
        else if(s=="maximum?"){
            if(m.empty()){
                cout<<"indefinite maximum"<<endl;
            }
            else{
                auto it =m.end();
                --it;
                cout<<"maximum: "<<it->first<<", "<<it->second<<" time(s)"<<endl;
            }

        }
        else if(s=="store"){
            string x; 
            cin>>x;
            if(m.find(x)==m.end()){
                m[x]=1;
            }
            
            else ++m[x];
            
        }
        else if(s=="delete"){
            string x; 
            cin>>x;
            if(m.find(x)!=m.end()){
                --m[x];
                if(m[x]<1){
                    m.erase(x);
                }
            }
            
           
        }
    }
}