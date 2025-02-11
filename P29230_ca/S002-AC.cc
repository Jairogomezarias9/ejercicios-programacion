#include <iostream>
#include <vector>
using namespace std;

// vector de céntimos
const vector<int> CENT{
    {50}, {20}, {10}, {5}, {2}, {1}};

// función de backtracking para resolver el problema
void backtrack(int n, int suma, vector<int> &total)
{
    /*si la suma actual es igual a la demandada,
      entonces hacemos cout del vector que contiene los valores de dicha suma
    */
    if (suma == n)
    {
        // booleano para imprimir el primer espacio despúes del primer cout
        bool trobat = false;
        // cout del vector
        for (int i = 0; i < total.size(); ++i)
        {
            if (not trobat)
            {
                trobat = true;
                cout << total[i];
            }
            else
            {
                cout << " " << total[i];
            }
        }
        cout << endl;
    }
    // si superamos el valor demandado
    else if (suma > n)
    {

        return;
    }
    // en caso que la suma sea diferente a la demandada
    else
    {
        // iteramos sobre el vector de céntimos
        for (const auto &x : CENT)
        {
            /*si el vector está vacío o si el último elemento de dicho vector és mayor al que vamos a insertar,
               entonces es un valor válido para insertar
            */
            if (total.empty() or x <= total[total.size() - 1])
            {

                total.push_back(x);
                backtrack(n, suma + x, total);
                total.pop_back();
            }
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        // vector para almacenar los valores que cumplirán la suma
        vector<int> total;
        backtrack(n, 0, total);
        cout << endl;
    }
}