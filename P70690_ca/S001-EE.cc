#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int n, m;
bool posok(int x, int y, vector<vector<char>> &mapa)
{
    return(x>=0 and x<n and y>=0 and y<m and mapa[x][y]!='X');
}
bool busqueda(int x, int y, vector<vector<bool>> &visitado, vector<vector<char>> &mapa)
{
    stack<pair<int, int>> s;
    s.push(make_pair(x, y));

    while (not s.empty())
    {
        int xx = s.top().first;
        int yy = s.top().second;
        s.pop();

        if(mapa[xx][yy]=='t'){
            return true;
        }

        if (not visitado[xx][yy])
        {
            
            visitado[xx][yy] = true;
            if (posok(xx + 1, yy, mapa))
            {
                s.push(make_pair(xx+1,yy));
            }
            if (posok(xx - 1, yy, mapa))
            {
                 s.push(make_pair(xx-1,yy));
            }
            if (posok(xx , yy+1, mapa))
            {
                 s.push(make_pair(xx,yy+1));
            }
            if (posok(xx + 1, yy-1, mapa))
            {
                 s.push(make_pair(xx,yy-1));
            }
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;

    vector<vector<bool>> visitado(n, vector<bool>(m, false));
    vector<vector<char>> mapa(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mapa[i][j];
        }
    }
    int x, y;
    cin >> x, y;
    --x;
    --y;
    bool dist = busqueda(x, y, visitado, mapa);
    if(not dist){
        cout<<"no"<<endl;

    }
    else cout<<"yes"<<endl;
}