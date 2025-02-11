#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;

void dijstra(int x, vector<double> &d, vector<int> &pred, vector<vector<pair<double, int>>> &taulell)
{
    vector<bool> visitado(n, false);

    d = vector<double>(n, -1);
    d[x] = 0;
    pred = vector<int>(n, -1);
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> q;
    q.push(make_pair(0, x));
    while (not q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (not visitado[u])
        {
            visitado[u] = true;

            for (int i = 0; i < taulell[u].size(); ++i)
            {
                int v = taulell[u][i].second;
                int c = taulell[u][i].first;
                if (d[v] == -1 or d[v] > d[u] + c)
                {
                    pred[v] = u;
                    d[v] = d[u] + c;
                    q.push(make_pair(d[v], v));
                }
            }
        }
    }
}

int main()
{
    while (cin >> n >> m)
    {
        vector<vector<pair<double, int>>> taulell(n);
        int u, v, c;
        for (int i = 0; i < m; ++i)
        {
            cin >> u >> v >> c;
            taulell[u].push_back(make_pair(c, v));
        }
        int x, y;
        cin >> x >> y;

        vector<double> d;
        vector<int> pred;
        dijstra(x, d, pred, taulell);
        if (d[y] != -1)
        {
            cout << d[y] << endl;
        }
        else
            cout << "no path from " << x << " to " << y << endl;
    }
}