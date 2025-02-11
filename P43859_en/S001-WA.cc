#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<double, int> ArcP;

void distra(vector<vector<pair<double, int>>> &G, int s, vector<double> &d, vector<int> &p)
{
    int n = G.size();
    d = vector<double>(n, 10000000);
    d[s] = 0;
    p = vector<int>(n, -1);
    vector<bool> S(n, false);
    priority_queue<ArcP, vector<ArcP>, greater<ArcP>> q;
    q.push(ArcP(0, s));

    while (not q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (not S[u])
        {
            S[u] = true;

            for (int i = 0; i < int(G[u].size()); ++i)
            {
                int v = G[u][i].second;
                int c = G[u][i].first;
                if (d[v] > d[u] + c)
                {
                    d[v] = d[u] + c;
                    p[v] = u;
                    q.push(ArcP(d[v], v));
                }
            }
        }
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<pair<double, int>>> grafo(n);
        int u, v, c;
        for (int i = 0; i < m; ++i)
        {
            cin >> u >> v >> c;
            grafo[u].push_back(make_pair(c, v));
        }
        int x, y;
        cin >> x >> y;
        vector<double> d;
        vector<int> p;
        distra(grafo,x,d,p);

        if(d[y]!=-1){
            cout<<d[y]<<endl;
        }
        else cout<<"no path from "<<x<< " to " <<y<<endl;



    }
}