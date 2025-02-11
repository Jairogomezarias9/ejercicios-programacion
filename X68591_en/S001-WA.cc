#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> busqueda(vector<vector<int>>& grafo,int n, int m){
    vector<bool> visited(n,false);
    queue<int> q;
    q.push({0}); //empiezo desde el vértice 0
    vector<int> visitados(n,0);

    while(not q.empty()){
        int x=q.front();
        q.pop();
        if(not visited[x]){
            visited[x]=true;

            for(int i =0;i<grafo[x].size();++i){
                int y=grafo[x][i];
                ++visitados[x];
                q.push(y);
            }
        }
    }
    return visitados;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<int>>grafo(n);
        int x,y;
        for(int i =0;i<m;++i){
            cin>>x>>y;
            grafo[x].push_back(y);
            grafo[y].push_back(x);

        }
        vector<int> v=busqueda(grafo,n,m);
        sort(v.begin(),v.end());
        cout<<v[0]<<" "<<v[v.size()-1]<<endl;


    }
}