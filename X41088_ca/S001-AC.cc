#include <iostream>
#include <vector>
using namespace std;

void back(int n, vector<int> &v, vector<bool> &visited)
{
    if (n == v.size())
    {
        cout << "(";
        bool si = true;
        for (int i = 0; i < n; ++i)
        {
            if (si)
            {
                cout << v[i];
                si = false;
            }
            else
                cout << "," << v[i];
        }
        cout << ")" << endl;
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            if (not visited[i])
            {
                if ((v.size() >= 2 and v[v.size() - 2] + i+1 <= 2 * v[v.size() - 1]) or v.size()<2)
                {
                    visited[i] = true;
                    v.push_back(i+1);
                    back(n, v, visited);
                    visited[i] = false;
                    v.pop_back();
                }
                
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    vector<bool> visited(n, false);
    back(n, v, visited);
}