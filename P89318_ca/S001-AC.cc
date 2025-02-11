#include <iostream>
#include <vector>
using namespace std;

const vector<char> LLETRES = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'

};

void imprime(vector<char> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
    }
    cout << endl;
}

void back(int x, vector<char> &v, vector<bool> &visited)
{
    if (x == v.size())
    {
        imprime(v);
    }
    else
    {
        for (int i = 0; i < x; ++i)
        {
            if (not visited[i])
            {
                if (v.empty() or v.back() != LLETRES[i-1])
                {
                    visited[i] = true;
                    v.push_back(LLETRES[i]);
                    back(x, v, visited);
                    visited[i] = false;
                    v.pop_back();
                }
            }
        }
    }
}

int main()
{
    int x;
    cin >> x;
    vector<char> v;
    vector<bool> visited(x, false);
    back(x, v, visited);
}