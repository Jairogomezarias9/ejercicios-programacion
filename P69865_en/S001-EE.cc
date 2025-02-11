#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

bool posok(int i, int j) {
    return (i >= 0 and i < n and j >= 0 and j < m);
}

int bfs(vector<vector<char>> &taulell, vector<pair<int, int>> &v) {
    int num = 0;

    // Movimientos del alfil
    const vector<pair<int, int>> bishop_moves = {{1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
    // Movimientos del caballo
    const vector<pair<int, int>> knight_moves = {{-2, 1}, {2, 1}, {2, -1}, {-2, -1},
                                                 {-1, 2}, {1, 2}, {1, -2}, {-1, -2}};

    while (!v.empty()) {
        int start_x = v.back().first;
        int start_y = v.back().second;
        char type = taulell[start_x][start_y];
        v.pop_back();

        queue<pair<int, int>> q;
        q.push({start_x, start_y});
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        visited[start_x][start_y] = true;

        if (type == 'B') { // Alfil
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (const auto& move : bishop_moves) {
                    int nx = x + move.first, ny = y + move.second;
                    while (posok(nx, ny) && taulell[nx][ny] != 'T') {
                        if (!visited[nx][ny]) {
                            visited[nx][ny] = true;
                            if (isdigit(taulell[nx][ny])) {
                                num += taulell[nx][ny] - '0';
                                taulell[nx][ny] = '.'; // Marcar como recogida
                            }
                            q.push({nx, ny});
                        }
                        nx += move.first;
                        ny += move.second;
                    }
                }
            }
        } else if (type == 'K') { // Caballo
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (const auto& move : knight_moves) {
                    int nx = x + move.first, ny = y + move.second;
                    if (posok(nx, ny) && taulell[nx][ny] != 'T' && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        if (isdigit(taulell[nx][ny])) {
                            num += taulell[nx][ny] - '0';
                            taulell[nx][ny] = '.'; // Marcar como recogida
                        }
                        q.push({nx, ny});
                    }
                }
            }
        }
    }

    return num;
}

int main() {
    while (cin >> n >> m) {
        vector<vector<char>> taulell(n, vector<char>(m));
        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> taulell[i][j];
                if (taulell[i][j] == 'B' || taulell[i][j] == 'K') {
                    v.push_back({i, j});
                }
            }
        }
        cout << bfs(taulell, v) << endl;
    }
}
