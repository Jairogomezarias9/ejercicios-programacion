#include <iostream>
#include <string>
using namespace std;

// Funció de backtracking per generar combinacions
void generar_combinacions(string combinacio, int n, int profunditat) {
    if (profunditat == n) {
        cout << combinacio << endl;
        return;
    }

    // Afegir cada lletra possible i continuar
    generar_combinacions(combinacio + 'A', n, profunditat + 1);
    generar_combinacions(combinacio + 'C', n, profunditat + 1);
    generar_combinacions(combinacio + 'G', n, profunditat + 1);
    generar_combinacions(combinacio + 'T', n, profunditat + 1);
}

int main() {
    int n;
    cin >> n;

    // Cridar la funció de tornada enrere
    generar_combinacions("", n, 0);

    return 0;
}
