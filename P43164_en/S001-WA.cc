#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
const vector<pair<int, int>> DIRECCIONS{{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool posok(int x, int y, vector<vector<char>> &taulell) {
    return x >= 0 && x < n && y >= 0 && y < m && taulell[x][y] != 'X';
}

int bfs(int x, int y, vector<vector<char>> &taulell) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    visited[x][y] = true;
    dist[x][y] = 0;
    q.push({x, y});

    vector<int> tesoros_distancias;

    while (!q.empty()) {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();

        if (taulell[xx][yy] == 't') {
            tesoros_distancias.push_back(dist[xx][yy]);
        }

        for (const auto &d : DIRECCIONS) {
            int nx = xx + d.first, ny = yy + d.second;
            if (posok(nx, ny, taulell) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[xx][yy] + 1;
                q.push({nx, ny});
            }
        }
    }

    if (tesoros_distancias.size() < 2) {
        return -1; // No hay suficientes tesoros accesibles
    }

    sort(tesoros_distancias.begin(), tesoros_distancias.end(), greater<int>());
    return tesoros_distancias[1]; // Segunda distancia máxima
}

int main() {
    cin >> n >> m;
    vector<vector<char>> taulell(n, vector<char>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> taulell[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    --x;
    --y;

    int s = bfs(x, y, taulell);
    if (s == -1) {
        cout << "no es pot arribar a dos o mes tresors" << endl;
    } else {
        cout << "segona distancia maxima: " << s << endl;
    }
}
