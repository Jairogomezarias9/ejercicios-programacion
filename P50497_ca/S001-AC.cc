#include <iostream>
#include <vector>
using namespace std;

bool es_palindrom(const string& s){
    int l=s.length();
    for(int i =0; i<l;++i){
        if(s[i]!=s[(l-1)-i]){ return false;}
        
    }
    return true;

    
}


int main(){
    string s;
    cin>>s;
    cout<<es_palindrom(s)<<endl;
}