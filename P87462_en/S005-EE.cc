#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;

const vector<pair<int, int>> DIRECCIONS{
    {1, 0}, {-1, 0}, {0, 1}, {0, -1}

};

bool posok(int x, int y, vector<vector<char>> &taulell)
{
    return (x >= 0 and y >= 0 and x < n and y < m and taulell[x][y] != 'X');
}

void bfs(vector<vector<char>> &taulell, int x, int y, vector<int> &distancias)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;
    dist[x][y] = 0;
    visited[x][y] = true;

    q.push({x, y});
    while (not q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();

        if (taulell[xx][yy] == 't')
        {
            distancias.push_back(dist[xx][yy]);
        }

        for (const auto &s : DIRECCIONS)
        {
            if (posok(s.first + xx, s.second + yy, taulell))
            {
                if (not visited[xx][yy])
                {
                    visited[xx][yy] = true;
                    q.push({s.first + xx, s.second + yy});
                    dist[xx + s.first][yy + s.second] = dist[xx][yy] + 1;
                }
            }
        }
    }

sort(distancias.begin(), distancias.end(), greater<int>());
}

int main()
{
    cin >> n >> m;

    vector<vector<char>> taulell(n, vector<char>(m));
    vector<int> distancias;

    int x, y;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> taulell[i][j];
        }
    }
    cin >> x >> y;
    --x;
    --y;

    bfs(taulell, x, y, distancias);
    if (distancias.size() < 2)
    {
        cout << "no es pot arribar a dos o mes tresors" << endl;
    }
    else
    {
        cout << "segona distancia maxima: " << distancias[1] << endl;
    }
}
