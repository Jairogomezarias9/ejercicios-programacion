#include <iostream>
#include <vector>
using namespace std;

int comprovapare(vector<int> &v, int vertex)
{
    while (v[vertex] != vertex)
    {
        vertex = v[vertex];
    }
    return vertex;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> v(n);
        for (int i = 0; i < n; ++i)
        {
            v[i] = i;
        }

        bool bosque = true;
        int arbres = n;

        while (m--)
        {
            
            int x, y;
            cin >> x >> y;
            if (bosque)
            {
                int padrex = comprovapare(v, x);
                int padrey = comprovapare(v, y);

                if (padrex == padrey)
                {
                    bosque = false;
                }
                else
                {
                    v[x] = v[padrex] = padrey;

                    --arbres;
                }
            }
        }

        if (not bosque)
        {
            cout << "no" << endl;
        }
        else
            cout << arbres << endl;
    }
}