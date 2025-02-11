#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
const vector<pair<int,int>> DIRECCIONS{
    {1,0},{-1,0},{0,-1},{0,1}

};
bool margen(int x, int y){
    return(x>=0 and y>=0 and x<n and y<m);
}
bool enemigo(vector<vector<char>>& taulell, int x, int y){
    return (taulell[x][y]=='M');
}

bool posok(int x, int y, vector<vector<char>>& taulell){
    if(not margen(x,y)){
        return false;
    }
    if(enemigo(taulell,x,y)){
        return false;
    }
   
   
    for(const auto& s:DIRECCIONS){
        if(margen(x+s.first,y+s.second) and enemigo(taulell,x+s.first,y+s.second)){
            return false;
        }
    }
    return true;
}

int bfs(vector<vector<char>>& taulell, int x, int y){
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    queue<pair<int,int>> q;
    q.push({x,y});

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
                    q.push({xx+s.first,yy+s.second});
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
        vector<vector<char>> taulell(m, vector<char>(m));
        int x, y;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> taulell[i][j];
                if (taulell[i][j] == 'I')
                {
                    x = i;
                    y = j;
                }
            }
        }
        int s=bfs(taulell,x,y);
        if(s==-1){
            cout<<"NO"<<endl;
        }
        else cout<<"SI"<<endl;

    }
}