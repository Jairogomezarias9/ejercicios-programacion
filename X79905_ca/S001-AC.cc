#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> m;
    char x;
    string s;
    while(cin>>x>>s){
        if(x=='a'){
            
            ++m[s];
        }
        else if(x=='f'){
            cout<<m[s]<<endl;
            
        }
        else if(x=='e'){
            if(m[s]>0){
                --m[s];
            }
        }
    }
}