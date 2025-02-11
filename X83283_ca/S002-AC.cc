#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfs(vector<vector<int>> &v, int n, int m)
{
    queue<int> q;
    q.push({0});
    vector<int> distancias(n,-1);
    distancias[0]=0;

    int verticemax=0;

    while (not q.empty())
    {
        int y = q.front();
        q.pop();

        for (int s : v[y])
        {
            if (distancias[s]==-1){
                distancias[s]=distancias[y]+1;
                q.push(s);
                if(distancias[s]>distancias[verticemax]){
                    verticemax=s;
                }
                else if(distancias[s]==distancias[verticemax] and s<verticemax){
                    verticemax=s;
                }
            }
        }
    }
    return verticemax;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<vector<int>> v(n);
        int x, y;
        for (int i = 0; i < m; ++i)
        {
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int s = bfs(v, n, m);
        cout << s << endl;
    }
}