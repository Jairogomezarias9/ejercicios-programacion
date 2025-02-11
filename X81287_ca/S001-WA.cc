#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int y;

void distra(int x, vector<int> &pred, vector<double> &d, vector<vector<pair<double, int>>> &taulell, const vector<int> &coste)
{
    d = vector<double>(n, -1);
    d[x] = 0;
    pred = vector<int>(n, -1);
    vector<bool> visited(n, false);
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> q;
    q.push(make_pair(0, x));

    while (not q.empty())
    {
        int u = q.top().second;
        q.pop();

        if (not visited[u])
        {
            visited[u] = true;
            for (int i = 0; i < taulell[u].size(); ++i)
            {
                int v = taulell[u][i].second;
                int c = taulell[u][i].first;
                int additional_cost = 0; // Inicializamos el costo adicional como 0

                // Verificamos si estamos en el nodo de destino o en el nodo de origen
                if (v != x && v != y)
                {
                    additional_cost = coste[v]; // Si no es el origen ni el destino, sumamos el costo de dormir en la ciudad
                }
                if (d[v] == -1 or d[v] > d[u] + c + additional_cost)
                {
                    pred[v] = u;
                    d[v] = d[u] + c + additional_cost;
                    q.push(make_pair(d[v], v));
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> coste(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> coste[i];
    }
    vector<vector<pair<double, int>>> taulell(n);
    int u, v, c;
    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v >> c;
        taulell[u].push_back(make_pair(c, v));
    }
    int x;

    while (cin >> x >> y)
    {
        vector<int> pred;
        vector<double> d;
        coste[x] = 0;
        distra(x, pred, d, taulell, coste);
        if (d[y] != -1)
        {
            cout << "c(" << x << "," << y << ")" << " = " << d[y] << endl;
        }
        else
            cout << "c(" << x << "," << y << ")" << " = " << "+oo" << endl;
    }
}