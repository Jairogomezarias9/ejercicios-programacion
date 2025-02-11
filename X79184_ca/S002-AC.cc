#include<iostream>
#include<set>
#include<map>
using namespace std;


int main(){
    string s;
    map<int,set<string>> anys;
    map<int,int> numpers;
    map<string,int> pers;
    
        while(cin>>s){
            if(s=="NEWPERSON"){
                string person;
                int num;
                cin>>person>>num;
                ++numpers[num];
                pers[person]=num;
                anys[num].insert(person);
            }
            else if(s=="BIRTHDAY"){
                string name;
                cin>>name;
                
                anys[pers[name]].erase(name);
                int edat=pers[name]+1;
                anys[edat].insert(name);
                --numpers[pers[name]];
                ++numpers[edat];
                ++pers[name];

            }
            else if(s=="NUMBERWITHAGE"){
                int num;
                cin>>num;
                cout<<numpers[num]<<endl;
            }
            else if(s=="PEOPLEWITHAGE"){
                int age;
                cin>>age;
                bool trobat=false;
                for(auto it=anys[age].begin();it!=anys[age].end();++it){
                    if(trobat){
                        cout<<" ";
                    }
                    trobat=true;
                    cout<<*it;

                }
                cout<<endl;
            }
        }
}