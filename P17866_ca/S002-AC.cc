#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n,m;
const vector<pair<int,int>> DIRECCIONS{
    {2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}

};

bool posok(int x, int y, vector<vector<char>>& taulell){
    return (x>=0 and y>=0 and x<n and y<m and taulell[x][y]!='X');
}

int bfs(int x, int y, vector<vector<char>>& taulell){
    vector<vector<bool>>visited(n,vector<bool>(m,false));
    queue<pair<int,pair<int,int>>>q;
    q.push({0,{x,y}});

    while(not q.empty()){
        int xx=q.front().second.first;
        int yy = q.front().second.second;
        int dist=q.front().first;
        q.pop();

        if(not visited[xx][yy]){
            visited[xx][yy]=true;
            if(taulell[xx][yy]=='p'){
                return dist;
            }
            for(const auto& s:DIRECCIONS){
                if(posok(xx+s.first,yy+s.second,taulell)){
                    q.push({dist+1,{xx+s.first,yy+s.second}});
                }
            }
        }
    }
    return -1;
}


int main(){
    while(cin>>n>>m){
        vector<vector<char>> taulell(n,vector<char>(m));
        for(int i =0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>taulell[i][j];
            }
        }
        int x,y;
        cin>>x>>y;
        --x;
        --y;
        int s=bfs(x,y,taulell);
        if(s==-1){
            cout<<"no"<<endl;
        }
        else cout<<s<<endl;

    }


}