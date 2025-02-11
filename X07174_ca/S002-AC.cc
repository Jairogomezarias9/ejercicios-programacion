#include <iostream>
#include <vector>
using namespace std;
bool posok(int num, vector<int>&v){
    for(int i =0;i<v.size();++i){
        if(num%v[i]==0){
            return false;
        }
    }
    return true;
}

void back(int n, int m, vector<int> &v, int k,int num)
{
    if (k == n)
    {
        cout<<num;
        cout<<endl;
    }
    else{
        for(int i =0;i<10;++i){
            int newnum=num*10+i;
            if(posok(newnum,v)){
                back(n,m,v,k+1,newnum);
            }
            
        }
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> v(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> v[i];
        }
        back(n,m,v,0,0);
        cout<<"----------"<<endl;
    }
}