#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int n, m;

bool posok(int x, int y, vector<vector<char>> &mapa) {
    return (x >= 0 && x < n && y >= 0 && y < m && mapa[x][y] != 'X');
}

bool busqueda(int x, int y, vector<vector<bool>> &visitado, vector<vector<char>> &mapa) {
    stack<pair<int, int>> s;
    s.push(make_pair(x, y));
    visitado[x][y] = true;  // Marcamos como visitada al empujar la celda inicial

    while (!s.empty()) {
        int xx = s.top().first;
        int yy = s.top().second;
        s.pop();

        // Si encontramos el tesoro, devolvemos true
        if (mapa[xx][yy] == 't') {
            return true;
        }

        // Verificar vecinos
        if (posok(xx + 1, yy, mapa) && !visitado[xx + 1][yy]) {  // Abajo
            s.push(make_pair(xx + 1, yy));
            visitado[xx + 1][yy] = true;
        }
        if (posok(xx - 1, yy, mapa) && !visitado[xx - 1][yy]) {  // Arriba
            s.push(make_pair(xx - 1, yy));
            visitado[xx - 1][yy] = true;
        }
        if (posok(xx, yy + 1, mapa) && !visitado[xx][yy + 1]) {  // Derecha
            s.push(make_pair(xx, yy + 1));
            visitado[xx][yy + 1] = true;
        }
        if (posok(xx, yy - 1, mapa) && !visitado[xx][yy - 1]) {  // Izquierda
            s.push(make_pair(xx, yy - 1));
            visitado[xx][yy - 1] = true;
        }
    }
    return false;
}

int main() {
    cin >> n >> m;

    vector<vector<bool>> visitado(n, vector<bool>(m, false));
    vector<vector<char>> mapa(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mapa[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    --x;
    --y;

    if (busqueda(x, y, visitado, mapa)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
