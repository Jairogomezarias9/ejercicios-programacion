#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n,m;
const vector<pair<int,int>> DIRECCIONES{
    {1,0},{-1,0},{0,1},{0,-1}

};
bool margen(int x, int y){
    return (x>=0 and y>=0 and x<n and y<m);
}
bool posok(int x, int y, vector<vector<char>>& taulell){
    if(not margen(x,y)){
        return false;
    }
    if(taulell[x][y]=='X' or taulell[x][y]=='F'){
        return false;
    }
    vector<pair<int,int>> dir{
        {1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1}

    };
    for(auto&s:dir){
        if(margen(x+s.first,y+s.second) and taulell[x+s.first][y+s.second]=='F'){
            return false;
        }

    }
    return true;

}

int bfs(vector<vector<char>>& taulell, int x, int y){
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    visited[x][y]=true;
    queue<pair<int,int>> q;
    q.push({x,y});
    if(not posok(x,y,taulell)){
            return -1;
        }

    while(not q.empty()){
        int xx=q.front().first;
        int yy=q.front().second;
        q.pop();
        

        if(taulell[xx][yy]=='B'){
            return 1;
        }
        for(const auto& s:DIRECCIONES){
            if(posok(xx+s.first,yy+s.second,taulell) and not visited[xx+s.first][yy+s.second]){
                visited[xx+s.first][yy+s.second]=true;
                q.push({xx+s.first,yy+s.second});
            }

        }
    }
    return -1;
}



int main(){
    while(cin>>n>>m){
        vector<vector<char>>taulell(n,vector<char>(m));
        int x,y;
        for(int i =0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>taulell[i][j];
                if(taulell[i][j]=='P'){
                    x=i;
                    y=j;
                }
            }
        }
        int s=bfs(taulell,x,y);
        if(s==-1){
            cout<<"no"<<endl;
        }
        else{
            cout<<"si"<<endl;
        }

    }
}