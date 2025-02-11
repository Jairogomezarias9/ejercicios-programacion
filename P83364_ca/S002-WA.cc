#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un número es múltiple de algún divisor prohibido
bool multiple(int x, const vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        if (x % v[i] == 0) {
            return true; // Si es múltiple, devuelve true
        }
    }
    return false; // Si no es múltiple de ninguno, devuelve false
}

// Función recursiva de backtracking
void back(int n, const vector<int>& v, int current, int digits) {
    if (digits == n) {
        // Si hemos construido un número de n dígitos, lo imprimimos
        cout << current << endl;
        return;
    }

    for (int i = 1; i <= 9; ++i) {
        // Construimos el nuevo número
        int next = current * 10 + i;

        // Verificamos si el número no tiene un prefijo múltiple de los divisores
        if (!multiple(next, v)) {
            back(n, v, next, digits + 1); // Llamada recursiva con un dígito más
        }
    }
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector<int> v(m);
        for (int i = 0; i < m; ++i) {
            cin >> v[i];
        }

        // Iniciamos el backtracking para construir números de n dígitos
        back(n, v, 0, 0);

        // Separador al final de cada caso
        cout << "----------" << endl;
    }
}
