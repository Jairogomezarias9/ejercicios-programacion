#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

int n, m;
const vector<pair<int, int>> DIRECCIONS{
    {1, 1}, {1, -1}, {-1, 1}, {-1, -1}, {1, 0}, {-1, 0}, {0, 1}, {0, -1}
};

bool posok(int x, int y, vector<vector<char>> &taulell) {
    return (x >= 0 && y >= 0 && x < n && y < m && taulell[x][y] != 'X');
}

void bfs(vector<vector<char>> &taulell, int x, int y) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {x, y}});
    visited[x][y] = true;

    vector<vector<pair<int, int>>> padres(n, vector<pair<int, int>>(m, {-1, -1}));

    int distanciatotal = 0;
    int f1 = -1, f2 = -1;

    while (!q.empty()) {
        int xx = q.front().second.first;
        int yy = q.front().second.second;
        int dist = q.front().first;
        q.pop();

        if (taulell[xx][yy] == 'F') {
            distanciatotal = dist;
            f1 = xx;
            f2 = yy;
            break;
        }

        for (const auto &s : DIRECCIONS) {
            int nx = xx + s.first;
            int ny = yy + s.second;
            if (posok(nx, ny, taulell) && !visited[nx][ny]) {
                visited[nx][ny] = true;
                q.push({dist + 1, {nx, ny}});
                padres[nx][ny] = {xx, yy};
            }
        }
    }

    if (distanciatotal == 0) {
        cout << 0 << endl;
    } else {
        cout << distanciatotal+1<<" ";
        stack<pair<int, int>> s;
        while (f1 != -1 && f2 != -1) {
            s.push({f1, f2});
            int temp_f1 = padres[f1][f2].first;
            int temp_f2 = padres[f1][f2].second;
            f1 = temp_f1;
            f2 = temp_f2;
        }
        while (!s.empty()) {
            cout << " " << s.top().first << " " << s.top().second;
            s.pop();
        }
        cout << endl;
    }
}

int main() {
    while (cin >> n >> m) {
        vector<vector<char>> taulell(n, vector<char>(m));
        int x, y;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> taulell[i][j];
                if (taulell[i][j] == 'K') {
                    x = i;
                    y = j;
                }
            }
        }
        bfs(taulell, x, y);
    }
}
