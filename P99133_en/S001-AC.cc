#include <iostream>
#include <vector>
#include <string>
using namespace std;

void llegirvector(vector<string> &s){
    
    
    int n=s.size();
    for(int i =0;i<n;++i){
        cin>>s[i];
    }
    

}

void girarparaula(string &seqchars){
    int n=seqchars.size();
    for(int i =n-1;i>=0;--i){
        cout<<seqchars[i];
    }
    cout<<endl;
}



int main(){
    int n;
    cin>>n;
    vector<string> s(n);

llegirvector(s);
for(int i =n-1;i>=0;--i){
girarparaula(s[i]);

}




}