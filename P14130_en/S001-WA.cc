#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, valor;
    cin >> n;

    
    vector<int> v(n);

    for (int j = 0; j < n; ++j)
    {
        cin >> valor;
        v[j] = valor;
    }
    int suma = 0;

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i] == v[n - 1])
        {
            ++suma;
        }
    }
    cout << suma << endl;
}

