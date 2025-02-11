#include <iostream>
#include <vector>
using namespace std;

void back(int n, vector<int>& total, vector<bool>& visited){
    if(total.size()==n){
        cout << "(";
        bool si = true;
        for (int i = 0; i < n; ++i)
        {
            if (si)
            {
                cout << total[i];
                si = false;
            }
            else
                cout << "," << total[i];
        }
        cout << ")" << endl;
    }
    else{
        for(int i =1;i<=n;++i){
            if(not visited[i]){
                if(total.size()<2 or (total[total.size()-2]+i<=2*total[total.size()-1])){
                    visited[i]=true;
                    total.push_back(i);
                    back(n,total,visited);
                    visited[i]=false;
                    total.pop_back();
                }
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> total;
    vector<bool>visited(n,false);
    back(n,total,visited);

}