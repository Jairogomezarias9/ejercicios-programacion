#include <iostream>
#include <vector>
using namespace std;

const vector<char> LETRAS{
{'x'},{'y'},{'z'}
};
bool yes(char s,vector<char>& total,char c){
    int t=0;
    for(int i =0;i<c;++i){
        if(s==total[total.size()-i-1]){
        ++t;
    }

    }
    if(t==c){
        return false;
    }
    
    return true;
}

void back(int n, int c, vector<char>& total){
    if(total.size()==n){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(const auto& s:LETRAS){
            if(total.empty() or yes(s,total,c)){
                total.push_back(s);
                back(n,c,total);
                total.pop_back();
            }
        }
    }

}

int main(){
    int n,c;
    while(cin>>n>>c){
        vector<char> total;
        back(n,c,total);
        cout<<"--------------------"<<endl;


    }
}