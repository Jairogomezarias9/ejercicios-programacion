#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int n, m;

int bfs(vector<vector<pair<int, int>>> &v, vector<int> &d)
{
    d = vector<int>(n, INT_MAX);
    d[0] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 0});

    while (!q.empty())
    {
        int u = q.top().second;
        int dist = q.top().first;
        q.pop();

        if (dist > d[u]) continue; // Ignore outdated distances

        if (u == 1)
        {
            return d[u];
        }

        for (auto &edge : v[u])
        {
            int c = edge.first;
            int s = edge.second;

            if (d[s] > max(d[u], c))
            {
                d[s] = max(d[u], c);
                q.push({d[s], s});
            }
        }
    }
    return -1;
}

int main()
{
    while (cin >> n >> m)
    {
        vector<vector<pair<int, int>>> v(n);
        int x, y, c;

        for (int i = 0; i < m; ++i)
        {
            cin >> x >> y >> c;
            v[x].push_back({c, y});
        }

        vector<int> d;
        int result = bfs(v, d);
        cout << result << endl;
    }
}
