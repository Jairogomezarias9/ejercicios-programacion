#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
const vector<pair<int,int>> DIRECCIONES{
    {1,0},{-1,0},{0,1},{0,-1}

};
bool margen(int x, int y){
    return(x-1<0 or y-1<0 or x+1>=n or y+1>=n);
}
bool posok(int x, int y){
    return(x>=0 and y>=0 and x<n and y<n);
}

int bfs(vector<vector<int>>& taulell){
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;
    q.push({taulell[n/2][n/2],{n/2,n/2}});
    visited[n/2][n/2]=true;

    while(not q.empty()){
        int xx=q.top().second.first;
        int yy=q.top().second.second;
        int dist=q.top().first;
        q.pop();

        if(margen(xx,yy)){
            return dist;
        }

        for(const auto& s: DIRECCIONES){
            if(posok(xx+s.first,yy+s.second) and not visited[xx+s.first][yy+s.second]){
                visited[xx+s.first][yy+s.second]=true;
                q.push({dist+taulell[xx+s.first][yy+s.second],{xx+s.first,yy+s.second}});
            }

        }

    }
    return -1;

}

int main(){
    while(cin>>n){
        vector<vector<int>> taulell(n,vector<int>(n));
        for(int i =0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>taulell[i][j];
            }
        }
        int s=bfs(taulell);
        cout<<s<<endl;
    }
}

