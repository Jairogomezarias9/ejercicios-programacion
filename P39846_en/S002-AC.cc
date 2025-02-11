#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
int m;

bool posok(int x, int y, const vector<vector<char>> &mapa)
{
    if(x<n and x>=0 and y<m and y>=0 and mapa[x][y] != 'X'){
        return true;
    }
    return false;
}

int bfs(int x, int y, const vector<vector<char>> &mapa, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;
    int maximo = -1;
    q.push(make_pair(x, y));
    vector<vector<int>> dist(n, vector<int>(m, -1));
    dist[x][y] = 0;

    while (not q.empty())
    {
        int uno = q.front().first;
        int dos = q.front().second;
        q.pop();

        if (not visited[uno][dos])
        {

            visited[uno][dos] = true;
            if (mapa[uno][dos] == 't')
            {
                maximo=max(maximo,dist[uno][dos]); 
            }

            if (posok(uno + 1, dos, mapa))
            {
                if (dist[uno + 1][dos] == -1)
                {
                    q.push(make_pair(uno + 1, dos));
                    dist[uno + 1][dos] = dist[uno][dos] + 1;
                }
            }
            if (posok(uno - 1, dos, mapa))
            {
                if (dist[uno - 1][dos] == -1)
                {
                    q.push(make_pair(uno - 1, dos));
                    dist[uno - 1][dos] = dist[uno][dos] + 1;
                }
            }
            if (posok(uno, dos + 1, mapa))
            {

                if (dist[uno][dos + 1] == -1)
                {
                    q.push(make_pair(uno, dos + 1));
                    dist[uno][dos + 1] = dist[uno][dos] + 1;
                }
            }
            if (posok(uno, dos - 1, mapa))
            {
                if (dist[uno][dos - 1] == -1)
                {
                    q.push(make_pair(uno, dos - 1));
                    dist[uno][dos - 1] = dist[uno][dos] + 1;
                }
            }
        }
    }
    return maximo;
}

int main()
{

    cin >> n >> m;
    vector<vector<char>> mapa(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mapa[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    --x;
    --y;

    int s = bfs(x, y, mapa, visited);
    if (s == -1)
    {
        cout<<"no treasure can be reached"<<endl;
    }
    else
    {
        cout<<"maximum distance: "<<s<<endl;
    }
}