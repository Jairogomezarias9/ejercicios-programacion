#include <iostream>
#include <vector>
using namespace std;
const vector<char> LETRAS{
    {'x'},{'y'},{'z'}
};

void back(int n, int c, vector<char>& v, int k,vector<bool>& visited){
    if(v.size()==n){
        for(int i =0;i<n;++i){
            cout<<v[i];
        }
        cout<<endl;
    }
    else{
        for(const auto& x: LETRAS){
            if(v.size()<c or (v.size()>=c and v[k-c]!=x)){
                
                v.push_back(x);
                back(n,c,v,k+1,visited);
                v.pop_back();
            }

        }
    }

}

int main(){
    int n,c;
    while(cin>>n>>c){
        vector<char> v;
        vector<bool>visited(3,false);
        back(n,c,v,0,visited);
        cout<<"--------------------"<<endl;
    }
}