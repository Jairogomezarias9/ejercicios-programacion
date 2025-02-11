#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const vector<char> VOCALES{
    {'a'},{'e'},{'i'},{'o'},{'u'}

};

bool esvocal(char s){
    for(const auto& x:VOCALES){
        if(s==x){
            return true;
            
        }
    }
    return false;

}

void back(vector<char>&v,int n, int m, vector<char>& total){
    if(n==total.size()){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;

    }
    else{
        for(int i =0;i<m;++i){
            if(total.empty() or not esvocal(v[i])){
                total.push_back(v[i]);
                back(v,n,m,total);
                total.pop_back();

            }
            else if(esvocal(v[i]) and not esvocal(total[total.size()-1])){
                 total.push_back(v[i]);
                back(v,n,m,total);
                total.pop_back();

            }

        }
    }
}


int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<char> v(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<char> total;
        back(v,n,m,total);
        cout<<"----------"<<endl;
    }
}