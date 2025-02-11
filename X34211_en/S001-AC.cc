#include <iostream>
#include <vector>
using namespace std;
void llegirvector(vector<int>&v){
    int n=v.size();
    for(int i =0;i<n;++i){
        cin>>v[i];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
     llegirvector(v);
    
    string s;
    while(cin>>s){
        int suma=0;
        for(int i =0;i<n;++i){
            if(s[i]=='-'){
               suma=suma - v[i];
            }
            else if(s[i]=='+'){
                suma=suma+v[i];
            }
        }
        cout<<suma<<endl;
    }

}