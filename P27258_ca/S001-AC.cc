#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;

const vector<pair<int,int>> DIRECCIONS{
    {1,0},{-1,0},{0,1},{0,-1}

};

bool posok(int x, int y, vector<vector<char>>& taulell){
 if (x < 0 || x >= n || y < 0 || y >= m || taulell[x][y] == 'M') {
        return false;
    }
    // Comprobar que las casillas adyacentes no contengan monstruos
    for (const auto& d : DIRECCIONS) {
        int nx = x + d.first;
        int ny = y + d.second;
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && taulell[nx][ny] == 'M') {
            return false;
        }
    }
    return true;
}

int bfs(int x, int y, vector<vector<char>>& taulell){
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    queue<pair<int,int>> q;
    q.push(make_pair(x,y));

    while(not q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        if(not visited[xx][yy]){
            visited[xx][yy]=true;
            if(taulell[xx][yy]=='F'){
                return 1;
            }
            for(const auto& s:DIRECCIONS){
                if(posok(xx+s.first,yy+s.second,taulell)){
                    q.push(make_pair(xx+s.first,yy+s.second));
                }
            }
        }
    }
    return -1;
}

int main()
{
    while (cin >> n >> m)
    {
        vector<vector<char>> taulell(n, vector<char>(m));
        int x,y,a,b;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> taulell[i][j];
                if (taulell[i][j] =='I')
                {
                    x=i;
                    y=j;
                }
            }
        }
       int z= bfs(x,y,taulell);
        if(z==-1){
            cout<<"NO"<<endl;
        }
        else cout<<"SI"<<endl;
    }
}