#include <iostream>
#include <vector>
using namespace std;


void back(int n, int d, vector<int>& total, vector<bool>& visited){
    if(n==total.size()){
        cout<<"(";
        bool trobat=false;
        for(int i =0;i<n;++i){
            if(not trobat){
                trobat=true;
            }
            else{
                cout<<",";
            }
            cout<<total[i];

        }
        cout<<")"<<endl;
    }
    else{
        for(int i =1;i<=n;++i){
            if(not visited[i]){
                if(total.empty() or abs(total[total.size()-1]-i)<=d){
                    visited[i]=true;
                    total.push_back(i);
                    back(n,d,total,visited);
                    visited[i]=false;
                    total.pop_back();
                }
            }
        }

    }
}

int main(){
    int n,d;
    cin>>n>>d;
    vector<int>total;
    vector<bool>visited(n,false);
    back(n,d,total,visited);
}