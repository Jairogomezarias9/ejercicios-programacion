#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<double, int> ArcP;     // arc amb pes
typedef vector<vector<ArcP>> GrafP; // graf amb pesos
void dijkstra(const GrafP &G, int s, vector<double> &d, vector<int> &p)
{
    int n = G.size();
    d = vector<double>(n, -1); // Vector de distàncies
    d[s] = 0;                  // Vèrtex des del qual partim
    p = vector<int>(n, -1);    // Vector de previs
    vector<bool> S(n, false);  // Vector de visitats
    priority_queue<ArcP, vector<ArcP>, greater<ArcP>> Q;
    Q.push(ArcP(0, s));
    while (not Q.empty())
    {
        int u = Q.top().second;
        Q.pop();
        if (not S[u])
        {
            S[u] = true;
            for (int i = 0; i < int(G[u].size()); ++i)
            {
                int v = G[u][i].second;
                int c = G[u][i].first;
                if (d[v] == -1 or d[v] > d[u] + c)
                {
                    d[v] = d[u] + c;
                    p[v] = u;
                    Q.push(ArcP(d[v], v));
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
        GrafP G(n);
        int u, v, c;
        for (int i = 0; i < m; ++i)
        {
            cin >> u >> v >> c;
            G[u].push_back(make_pair(c, v));
        }
        int x, y;
        cin >> x >> y;
        vector<double> d;
        vector<int> p;
        dijkstra(G, x, d, p);
        if (d[y] != -1)
            cout << d[y] << endl;
        else
            cout << "no path from " << x << " to " << y << endl;
    }
}