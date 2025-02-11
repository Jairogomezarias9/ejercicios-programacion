#include <iostream>
#include <vector>
using namespace std;

void backtrack(int idx, int n, const vector<int> &coins, int x, int current_sum, vector<int> &used, int &count)
{
    // Si hemos alcanzado exactamente la suma deseada
    if (current_sum == x)
    {
        count++;
        return;
    }
    // Si la suma actual supera el valor deseado o hemos procesado todas las monedas
    if (current_sum > x || idx == n)
    {
        return;
    }

    // Probar todas las posibilidades con la moneda actual
    for (int i = 0; i <= 2; ++i)
    { // Cada moneda puede usarse 0, 1 o 2 veces
        if (used[idx] + i <= 2)
        {
            used[idx] += i;
            backtrack(idx + 1, n, coins, x, current_sum + i * coins[idx], used, count);
            used[idx] -= i; // Retroceder (backtrack)
        }
    }
}

int main()
{
    int x;
    while (cin >> x)
    {
        int n;
        cin >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> coins[i];
        }

        int count = 0;
        vector<int> used(n, 0); // Vector para rastrear cuántas veces se ha usado cada moneda
        backtrack(0, n, coins, x, 0, used, count);

        cout << count << endl;
    }
    return 0;
}
