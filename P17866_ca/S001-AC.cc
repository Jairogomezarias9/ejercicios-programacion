#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

const vector<pair<int, int>> DIRECCIONS{
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool posok(int x, int y, vector<vector<char>> &v)
{
    return (x >= 0 and x < n and y >= 0 and y < m and v[x][y] != 'X');
}

int bfs(vector<vector<char>> &v, int x, int y)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {x, y}});
    while (not q.empty())
    {
        int xx = q.front().second.first;
        int yy = q.front().second.second;
        int dist = q.front().first;
        q.pop();
        if (not visited[xx][yy])
        {
            visited[xx][yy] = true;
            if (v[xx][yy] == 'p')
            {
                return dist;
            }
            for (const auto &x : DIRECCIONS)
            {
                if (posok(xx + x.first, yy + x.second, v))
                {
                    q.push(make_pair(dist + 1, make_pair(xx + x.first, yy + x.second)));
                }
            }
        }
    }
    return -1;
}

int main()
{
    while (cin >> n >> m)
    {
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> v[i][j];
            }
        }
        int x, y;
        cin >> x >> y;
        --x;
        --y;
        int s = bfs(v, x, y);
        if (s == -1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}