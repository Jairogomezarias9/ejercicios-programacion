#include <iostream>
#include <vector>
using namespace std;

bool esPermes(int num, const vector<int> &prohibits)
{
    for (int p : prohibits)
    {
        if (num % p == 0)
        {
            return false;
        }
    }
    return true;
}

void generarNombres(int n, const vector<int> &prohibits, int num, int k)
{
    if (n == k)
    {
        cout << num << endl;
        return;
    }

    for (int i = 0; i <= 9; ++i)
    {
        int newNum = num * 10 + i;
        if (esPermes(newNum, prohibits))
        {
            generarNombres(n, prohibits, newNum,k+1);
        }
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> prohibits(m);
        for (int i = 0; i < m; ++i)
            cin >> prohibits[i];
        generarNombres(n, prohibits, 0,0);
        cout << "----------" << endl;
    }
}