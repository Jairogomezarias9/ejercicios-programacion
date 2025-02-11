#include <iostream>
#include <vector>
using namespace std;

const vector<char> LETRAS{'x', 'y', 'z'};

void back(int n, int c, vector<char>& v) {
    if (v.size() == n) {
        // Imprimir la palabra generada
        for (char ch : v) cout << ch;
        cout << endl;
    } else {
        for (const auto& x : LETRAS) {
            // Comprobar que no haya más de c letras consecutivas iguales
            bool valido = true;
            int count = 0;
            for (int i = v.size() - 1; i >= 0 && count < c; --i) {
                if (v[i] == x) ++count;
                else break;
            }
            if (count < c) {
                v.push_back(x);           // Añadir la letra actual
                back(n, c, v);            // Llamada recursiva
                v.pop_back();             // Deshacer el cambio
            }
        }
    }
}

int main() {
    int n, c;
    while (cin >> n >> c) {
        vector<char> v;                   // Vector para construir las palabras
        back(n, c, v);
        cout << "--------------------" << endl;
    }
    return 0;
}
