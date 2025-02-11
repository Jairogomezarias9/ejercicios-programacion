#include <iostream>
#include <vector>
using namespace std;
int n,m;

void dibuja(vector<char>& c){
    for(int i =0;i<c.size();++i){
        cout<<c[i];
    }
    cout<<endl;
}

bool posok(int a, int b){
    if(a>=0 and b>=0 and b<m and a<n){
        return true;
    }
    return false;
}

void backtrack(vector<vector<char>> &taulell, vector<vector<bool>> &visited,int x, int y, int a, int b, vector<char>& c){
    if(a==x and y==b){
        dibuja(c);

    }
    else{
        if(posok(x+1,y) and not visited[x+1][y]){
            visited[x+1][y]=true;
            c.push_back(taulell[x+1][y]);
            backtrack(taulell,visited,x+1,y,a,b,c);
            c.pop_back();
            visited[x+1][y]=false;
        }
        if(posok(x-1,y) and not visited[x-1][y]){
            visited[x-1][y]=true;
            c.push_back(taulell[x-1][y]);
            backtrack(taulell,visited,x-1,y,a,b,c);
            c.pop_back();
            visited[x-1][y]=false;
        }
        if(posok(x,y+1) and not visited[x][y+1]){
            visited[x][y+1]=true;
            c.push_back(taulell[x][y+1]);
            backtrack(taulell,visited,x,y+1,a,b,c);
            c.pop_back();
            visited[x][y+1]=false;
        }
        if(posok(x,y-1) and not visited[x][y-1]){
            visited[x][y-1]=true;
            c.push_back(taulell[x][y-1]);
            backtrack(taulell,visited,x,y-1,a,b,c);
            c.pop_back();
            visited[x][y-1]=false;
        }

        

    }

}



int main(){
    cin>>n>>m;
    vector<vector<char>> taulell(n,vector<char>(m));
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    vector<char> c;

    for(int i =0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>taulell[i][j];
        }
    }

    int x,y;
    cin>>x>>y;
    
    visited[x][y]=true;
    c.push_back(taulell[x][y]);

    int a,b;
    cin>>a>>b;
    

    backtrack(taulell,visited,x,y,a,b,c);






}