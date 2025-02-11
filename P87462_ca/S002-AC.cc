#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int n, m;

bool posok(int x, int y, vector<vector<char>> &taulell)
{
    return (x >= 0 and y >= 0 and x < n and y < m and taulell[x][y] != 'X' and x + 1 >= 0 and x + 1 < n and x - 1 >= 0 and x - 1 < n and y + 1 >= 0 and y + 1 < m and y - 1 >= 0 and y - 1 < m and taulell[x + 1][y] != 'F' and taulell[x - 1][y] != 'F' and taulell[x][y + 1] != 'F' and taulell[x][y - 1] != 'F' and taulell[x + 1][y + 1] != 'F' and taulell[x + 1][y - 1] != 'F' and taulell[x - 1][y - 1] != 'F' and taulell[x - 1][y + 1] != 'F');
}

int bfs(vector<vector<char>> &taulell, int x, int y)
{

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));

    while (not q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();

        if (not visited[xx][yy])
        {
            visited[xx][yy] = true;
            if (taulell[xx + 1][yy] == 'F' or taulell[xx - 1][yy] == 'F' or taulell[xx][yy + 1] == 'F' or taulell[xx][yy - 1] == 'F' or taulell[xx + 1][yy + 1] == 'F' or taulell[xx + 1][yy - 1] == 'F' or taulell[xx - 1][yy - 1] == 'F' or taulell[xx - 1][yy + 1] == 'F')
            {
                return -1;
            }
            if (taulell[xx][yy] == 'B')
            {
                return 1;
            }

            if (posok(xx + 1, yy, taulell))
            {
                q.push(make_pair(xx + 1, yy));
            }
            if (posok(xx - 1, yy, taulell))
            {
                q.push(make_pair(xx - 1, yy));
            }
            if (posok(xx, yy + 1, taulell))
            {
                q.push(make_pair(xx, yy + 1));
            }
            if (posok(xx, yy - 1, taulell))
            {
                q.push(make_pair(xx, yy - 1));
            }
        }
    }
    return -1;
}

int main()
{
    while (cin >> n >> m)
    {
        vector<vector<char>> taulell(n, vector<char>(m));

        int x, y;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> taulell[i][j];
                if (taulell[i][j] == 'P')
                {
                    x = i;
                    y = j;
                }
            }
        }

        int s = bfs(taulell, x, y);
        if (s == 1)
        {
            cout << "si" << endl;
        }
        else
            cout << "no" << endl;
    }
}