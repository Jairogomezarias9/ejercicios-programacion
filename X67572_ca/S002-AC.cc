#include <iostream>
#include <vector>
using namespace std;

bool si(string x, string y){
    if(x[0]==y[y.size()-1]){
        return false;
    }
    return true;
}

void back(int n, vector<string>& v, vector<string>& total,vector<bool>& visited){
    if(total.size()==n){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<n;++i){
            if(not visited[i]){
            if(total.empty() or si(v[i],total[total.size()-1])){
                total.push_back(v[i]);
                visited[i]=true;
                back(n,v,total,visited);
                visited[i]=false;
                total.pop_back();
            }}
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i =0;i<n;++i){
        cin>>v[i];
    }
    vector<string> total;
    vector<bool>visited(n,false);
    back(n,v,total,visited);
}
