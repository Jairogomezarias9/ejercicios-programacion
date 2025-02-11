#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;

void distra(int a, vector<int> &p, vector<int> &d, vector<int> &v, vector<vector<pair<int, int>>> &taulell, int b)
{
    vector<bool> visited(n, false);
    p = vector<int>(n, -1);
    d = vector<int>(n, -1);
    d[a] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, a});
    while (not q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (not visited[u])
        {
            visited[u] = true;
            for (int i = 0; i < taulell[u].size(); ++i)
            {
                int w = taulell[u][i].second;
                int c = taulell[u][i].first;
                int coste = 0;
                
                    coste = v[w];
                
                if (d[w] > d[u] + c + coste or d[w] == -1)
                {
                    d[w] = d[u] + c + coste;
                    p[w] = u;
                    q.push({d[w], w});
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    vector<vector<pair<int, int>>> taulell(n);
    int x, y, dist;

    for (int j = 0; j < m; ++j)
    {
        cin >> x >> y >> dist;
        taulell[x].push_back({dist, y});
        taulell[y].push_back({dist, x});
    }
    int a, b;
    while (cin >> a >> b)
    {
        vector<int> p;
        vector<int> d;
        vector<int> vaux = v;
        vaux[a] = 0;
        vaux[b] = 0;
        distra(a, p, d, vaux, taulell, b);
        if (d[b] != -1)
        {
            cout << "c(" << a << "," << b << ")" << " = " << d[b] << endl;
        }
        else
            cout << "c(" << a << "," << b << ")" << " = " << "+oo" << endl;
    }
}
