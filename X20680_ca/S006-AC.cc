#include <iostream>
#include <vector>
using namespace std;

const vector<char> LLETRES{
    {'x'},{'y'},{'z'}

};
bool posok(int n, int m, vector<char>& total,char s){
    int t=0;
    for( int i =0;i<m;++i){
        if(total[total.size()-1 -i]==s){
            ++t;
        }

    }
    if(t==m){
        return false;
    }
    return true;

}

void back(int n, int m,vector<char>& total){
    if(n==total.size()){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(const auto& s:LLETRES){
            if(total.empty() or posok(n,m,total,s)){
                total.push_back(s);
                back(n,m,total);
                total.pop_back();
            }
        }

    }

}

int main(){
    int n,m;
    while(cin>>n>>m){
        vector<char>total;
        back(n,m,total);
        cout<<"--------------------"<<endl;


    }
}