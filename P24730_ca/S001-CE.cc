#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Profe{
    string nom;
    int primer;
    int segon;
};

void llegirvector(vector<Profe> &p){
    int n=p.size();
    for(int i =0;i<n;++i){
        cin>>p[i].nom;
        cin>>p[i].primer;
        cin>>p[i].segon;

    }
}

void escriuvector(const vector<Profe> &p){
    int n=p.size();
    for(int i =0;i<n;++i){
        cout<<p[i].nom<<endl;
    }
}

bool cmp(const Profe& p1, const Profe &p2){
    if(p1.primer != p2.primer) return p1.primer>p2.primer;
    if(p1.segon != p2.segon) return p1.segon > p2.segon;
    if(p1.nom.size() != p2.nom.size()) return p1.nom.size()<p2.nom.size();
    else return p1.nom<p2.nom;
}

int main(){
    int n;
    cin>>n;

    for(int i =0;i<n;++i){
        int u;
        cin>>u;
        vector<Profe> p(u);
        llegirvector(p);

        sort(p.begin(),p.end(),cmp);
        escriuvector(p);
    }
}