#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n, m;

const vector<pair<int,int>> DIRECCIONS{
    {2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}

};
bool posok(int x, int y, vector<vector<char>>& taulell){
    return(x>=0 and y>=0 and x<n and y<m and taulell[x][y]!='a');
}

void bfs(double &numflors, double &sumadistancias, vector<vector<char>> &taulell, int x, int y)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, pair<int, int>>> q;
    q.push({0, {x, y}});

    while (not q.empty())
    {
        int xx = q.front().second.first;
        int yy = q.front().second.second;
        int dist = q.front().first;
        q.pop();

        if(not visited[xx][yy]){
            visited[xx][yy]=true;
            if(taulell[xx][yy]=='F'){
                ++numflors;
                sumadistancias+=dist;
            }
            for(const auto& s:DIRECCIONS){
                if(posok(xx+s.first,yy+s.second,taulell)){
                    q.push({dist+1,{xx+s.first,yy+s.second}});
                }

            }
        }

    }
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(4);
    cin >> n >> m;
    vector<vector<char>> taulell(n, vector<char>(m));
    int x, y;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> taulell[i][j];
            if (taulell[i][j] == 'C')
            {
                x = i;
                y = j;
            }
        }
    }
    double numflors = 0;
    double sumadistancias = 0;
    bfs(numflors,sumadistancias,taulell,x,y);
    if(numflors==0){
        cout<<"el cavall no pot arribar a cap flor"<<endl;
    }
    else{
        double i = sumadistancias/numflors;
        cout<<"flors accessibles: "<<numflors<<endl;
        cout<<"distancia mitjana: "<<i<<endl;
    }
}