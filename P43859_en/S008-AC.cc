#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
int n,m;

void dis(vector<vector<pair<int,int>>>& taulell, vector<int>& p, vector<int>& d, int a){
    vector<bool>visited(n,false);
    d=vector<int>(n,INT_MAX);
    p=vector<int>(n,-1);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,a});
    d[a]=0;

    while(not q.empty()){
        int u=q.top().second;
        int dist=q.top().first;
        q.pop();

        if(not visited[u]){
            visited[u]=true;
        
            for(int i =0;i<taulell[u].size();++i){
                int v=taulell[u][i].second;
                int c=taulell[u][i].first;
                if(d[v]>d[u]+c){
                    d[v]=d[u]+c;
                    p[v]=u;
                    q.push({d[v],v});
                }

            }

        }
    }
}


int main(){
    
    while(cin>>n>>m){
        vector<vector<pair<int,int>>>taulell(n);
        int x,y,c;
        for(int i =0;i<m;++i){
            cin>>x>>y>>c;
            taulell[x].push_back({c,y});

        }
        int a,b;
        cin>>a>>b;
        vector<int> p;
        vector<int> d;
        dis(taulell,p,d,a);
        if(d[b]==INT_MAX){
            cout<<"no path from " <<a<<" to "<<b<<endl;
            
        }
        else cout<<d[b]<<endl;
        
        


    }
}