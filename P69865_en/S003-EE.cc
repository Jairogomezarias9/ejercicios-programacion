#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

bool posok(int i, int j) {
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int bfs(vector<vector<char>> &taulell, vector<pair<int, int>> &pieces) {
    int num = 0;

    // Movimientos del alfil
    const vector<pair<int, int>> bishop_moves = {{1, 1}, {-1, 1}, {-1, -1}, {1, -1}};
    // Movimientos del caballo
    const vector<pair<int, int>> knight_moves = {{-2, 1}, {2, 1}, {2, -1}, {-2, -1},
                                                 {-1, 2}, {1, 2}, {1, -2}, {-1, -2}};

    // Reutilizar un único array de visitados
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (auto &[start_x, start_y] : pieces) {
        char type = taulell[start_x][start_y];
        queue<pair<int, int>> q;
        q.push({start_x, start_y});
        fill(visited.begin(), visited.end(), vector<bool>(m, false)); // Reiniciar visitados
        visited[start_x][start_y] = true;

        if (type == 'B') { // Alfil
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (const auto &move : bishop_moves) {
                    int nx = x + move.first, ny = y + move.second;
                    if (posok(nx, ny) && taulell[nx][ny] != 'T') {
                        if (!visited[nx][ny]) {
                            visited[nx][ny] = true;
                            if (isdigit(taulell[nx][ny])) {
                                num += taulell[nx][ny] - '0';
                                taulell[nx][ny] = '.'; // Recoger moneda
                            }
                            q.push({nx, ny});
                        }
                       
                    }
                }
            }
        } else if (type == 'K') { // Caballo
            while (!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                for (const auto &move : knight_moves) {
                    int nx = x + move.first, ny = y + move.second;
                    if (posok(nx, ny) && taulell[nx][ny] != 'T' && !visited[nx][ny]) {
                        visited[nx][ny] = true;
                        if (isdigit(taulell[nx][ny])) {
                            num += taulell[nx][ny] - '0';
                            taulell[nx][ny] = '.'; // Recoger moneda
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
        vector<pair<int, int>> pieces;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> taulell[i][j];
                if (taulell[i][j] == 'B' || taulell[i][j] == 'K') {
                    pieces.push_back({i, j});
                }
            }
        }
        cout << bfs(taulell, pieces) << endl;
    }
}
