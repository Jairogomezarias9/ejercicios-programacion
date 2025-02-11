#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;

bool posok(int x, int y, vector<vector<char>> &mapa) {
    if (x >= 0 && x < n && y >= 0 && y < m && mapa[x][y] != 'X') {
        return true;
    }
    return false;
}

int busqueda(int x, int y, vector<vector<bool>> &visitado, vector<vector<char>> &mapa) {
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    vector<vector<int>> dist(n, vector<int>(m, -1));
    dist[x][y] = 0;
    int distanciamax=-1;

    while (!q.empty()) {
        int posx = q.front().first;
        int posy = q.front().second;
        q.pop();

        if (!visitado[posx][posy]) {
            visitado[posx][posy] = true;

            if (mapa[posx][posy] == 't') {
                distanciamax=max(distanciamax, dist[posx][posy]);
            }

            // Mover hacia abajo
            if (posok(posx + 1, posy, mapa)) {
                if (dist[posx + 1][posy] == -1) {
                    q.push(make_pair(posx + 1, posy));
                    dist[posx + 1][posy] = dist[posx][posy] + 1;
                }
            }

            // Mover hacia arriba
            if (posok(posx - 1, posy, mapa)) {
                if (dist[posx - 1][posy] == -1) {
                    q.push(make_pair(posx - 1, posy));
                    dist[posx - 1][posy] = dist[posx][posy] + 1;
                }
            }

            // Mover hacia la derecha
            if (posok(posx, posy + 1, mapa)) {
                if (dist[posx][posy + 1] == -1) {
                    q.push(make_pair(posx, posy + 1));
                    dist[posx][posy + 1] = dist[posx][posy] + 1;
                }
            }

            // Mover hacia la izquierda
            if (posok(posx, posy - 1, mapa)) {
                if (dist[posx][posy - 1] == -1) {
                    q.push(make_pair(posx, posy - 1));
                    dist[posx][posy - 1] = dist[posx][posy] + 1;
                }
            }
        }
    }
    return distanciamax;
}

int main() {
    cin >> n >> m;
    vector<vector<bool>> visitado(n, vector<bool>(m, false)); // Inicializamos con `false`
    vector<vector<char>> mapa(n, vector<char>(m));            // Inicializamos el mapa

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mapa[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--; // Convertir entrada a base 0
    y--;

    int dist = busqueda(x, y, visitado, mapa);
    if (dist == -1) {
        cout << "no es pot arribar a cap tresor" << endl;
    } else {
        cout << "distancia maxima: " << dist << endl;
    }
    return 0;
}
