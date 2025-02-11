#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;

vector<int> topo(vector<vector<int>> g)
{
    int n=g.size();
    vector<int> ge(n,0);
    for(int i =0;i<n;++i){
        for(int j=0;j<g[i].size();++j){
            ++ge[g[i][j]];
        }
    }


    stack<int> s;
    for(int k=0;k<n;++k){
        if(ge[k]==0){
            s.push(k);
        }
    }

    vector<int> vec;
    while(not s.empty()){
        int u = s.top();
        s.pop();
        vec.push_back(u);
        for(int i =0; i<g[u].size();++i){
            int v=g[u][i];
            if(ge[v]==0){
                s.push(v);
            }
        }
    }

    return vec;








}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int x, y;
        vector<vector<int>> g(n);
        for (int i = 0; i < m; ++i)
        {
            cin >> x >> y;
            g[x].push_back(y);
        }

        vector<int> l = topo(g);

        for (int i = 0; i < l.size(); ++i)
        {
            cout << (i ? " " : "") << l[i];
        }
        cout << endl;
    }
    return 0;
}
