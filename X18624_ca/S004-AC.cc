#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool vvv(vector<char>& total){
    return(total[total.size()-1]!='a' and total[total.size()-1]!='e' and total[total.size()-1]!='i' and total[total.size()-1]!='o' and total[total.size()-1]!='u' );
}
bool esv(char s){
    return(s=='a' or s=='e' or s=='i' or s=='o' or s=='u');
}
void back(int n, int m, vector<char>& v, vector<char>& total){
    if(n==total.size()){
        for(int i =0;i<n;++i){
            cout<<total[i];
        }
        cout<<endl;
    }
    else{
        for(int i=0;i<m;++i){
            if(total.empty()){
                total.push_back(v[i]);
                back(n,m,v,total);
                total.pop_back();
            }
            else if(not esv(v[i])){
                total.push_back(v[i]);
                back(n,m,v,total);
                total.pop_back();

            }
            else if((esv(v[i]) and vvv(total))){
                total.push_back(v[i]);
                back(n,m,v,total);
                total.pop_back();

            }
        }
    }
}


int main(){
    int n,m;
    while(cin>>n>>m){
        vector<char> v(m);
        for(int i =0;i<m;++i){
            cin>>v[i];
        }
        vector<char>total;
        sort(v.begin(),v.end());
        back(n,m,v,total);


        cout<<"----------"<<endl;
    }
}