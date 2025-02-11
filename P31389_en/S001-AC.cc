#include <iostream>
#include <vector>
using namespace std;

int n, m;

void dibuixa(vector<vector<char>> &taulell) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << taulell[i][j];
        }
        cout << endl;
    }
    cout << endl; // Salto de línea después de cada tablero
}

bool posok(int x, int y, vector<vector<char>> &taulell) {
    for (int i = 0; i < n; ++i) {
        if (taulell[i][y] == 'R') {
            return false; // Hay un rook en la misma columna
        }
    }
    for (int i = 0; i < m; ++i) {
        if (taulell[x][i] == 'R') {
            return false; // Hay un rook en la misma fila
        }
    }
    return true;
}

void back(int r, int c, vector<vector<char>> &taulell, int f, int col) {
    if (r == 0) {
        dibuixa(taulell);
    } else {
        for (int i = f; i < n; ++i) {
            for (int j = (i == f) ? col + 1 : 0; j < m; ++j) {
                if (posok(i, j, taulell)) {
                    taulell[i][j] = 'R';
                    back(r - 1, c, taulell, i, j);
                    taulell[i][j] = '.';
                }
            }
        }
    }
}

int main() {
    int r, c;
    cin >> r >> c;
    n = r; // Número de filas
    m = c; // Número de columnas
    vector<vector<char>> taulell(n, vector<char>(m, '.'));
    back(r, c, taulell, 0, -1);
    return 0;
}
