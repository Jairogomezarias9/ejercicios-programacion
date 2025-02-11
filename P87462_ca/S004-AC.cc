#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;

const vector<pair<int,int>> DIRECCIONS{
    {1,0},{-1,0},{0,1},{0,-1}

};
bool isInsideBounds(int x, int y, int n, int m) {
    return x >= 0 && y >= 0 && x < n && y < m;
}

bool isSafeCell(int x, int y, vector<vector<char>> &taulell) {
    return taulell[x][y] != 'X' && taulell[x][y] != 'F';
}

bool posok(int x, int y, vector<vector<char>> &taulell) {
    if (!isInsideBounds(x, y, n, m)) return false;
    if (!isSafeCell(x, y, taulell)) return false;

    // Verificar celdas adyacentes
    vector<pair<int, int>> directions = {
        {1, 0}, {-1, 0}, {0, 1}, {0, -1}, 
        {1, 1}, {1, -1}, {-1, 1}, {-1, -1}
    };

    for (auto [dx, dy] : directions) {
        int nx = x + dx;
        int ny = y + dy;
        if (isInsideBounds(nx, ny, n, m) && taulell[nx][ny] == 'F') {
            return false;
        }
    }
    return true;
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