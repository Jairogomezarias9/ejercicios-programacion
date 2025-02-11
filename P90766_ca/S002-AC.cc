#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

// Función para verificar si una posición es válida
bool posok(int a, int b, vector<vector<char>> &taulell, vector<vector<bool>> &visited)
{
    return (a >= 0 && b >= 0 && a < n && b < m && taulell[a][b] != 'X' && !visited[a][b]);
}

int bfs(vector<vector<char>> &taulell, int x, int y)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true; // Marcar como visitado al añadir a la cola
    int num = 0;

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        // Si es un tesoro, incrementamos el contador
        if (taulell[a][b] == 't')
        {
            ++num;
        }

        // Explorar las cuatro direcciones
        if (posok(a + 1, b, taulell, visited))
        {
            q.push({a + 1, b});
            visited[a + 1][b] = true;
        }
        if (posok(a - 1, b, taulell, visited))
        {
            q.push({a - 1, b});
            visited[a - 1][b] = true;
        }
        if (posok(a, b + 1, taulell, visited))
        {
            q.push({a, b + 1});
            visited[a][b + 1] = true;
        }
        if (posok(a, b - 1, taulell, visited))
        {
            q.push({a, b - 1});
            visited[a][b - 1] = true;
        }
    }
    return num;
}

int main()
{
    cin >> n >> m;
    vector<vector<char>> taulell(n, vector<char>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> taulell[i][j];
        }
    }
    int a, b;
    cin >> a >> b;
    --a;
    --b;
    cout << bfs(taulell, a, b) << endl;
}
