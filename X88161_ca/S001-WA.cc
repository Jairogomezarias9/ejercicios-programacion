#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Equip
{
    int num;
    int punts;
    int golsfavor;
    int golscontra;
};

bool cmp(Equip e1, Equip e2){
    if(e1.punts!=e2.punts){
        return e1.punts>e2.punts;
    }
    else if(e1.golsfavor>e2.golsfavor){
        return (e1.golsfavor-e1.golscontra)>(e2.golsfavor-e2.golscontra);
    }
    else return e1.num<e2.num;
    


}

int main()
{
    int n;
    cin >> n;
    vector<Equip> v(n);
    for (int i = 0; i < n; ++i)
    {
        v[i].num=i;
        for (int j = 0; j < n; ++j)
        {
            int e1, e2;
            cin >> e1 >> e2;
            if(i!=j){
            if (e1 > e2)
            {
                v[i].punts = v[i].punts + 3;
            }
            else if (e1 < e2)
            {
                v[j].punts = v[j].punts + 3;
            }
            else
            {
                ++v[i].punts;
                ++v[j].punts;
            }
            

            v[i].golsfavor+=e1;
            v[j].golsfavor+=e2;
            v[i].golscontra+=e2;
            v[j].golscontra+=e1;
            }

        }
    }

    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<n;++i){
        cout<<i+1<<" "<<v[i].punts<<" "<<v[i].golsfavor<<" "<<v[i].golscontra<<endl;
    }





}