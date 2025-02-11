#include <iostream>
#include <map>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    map<int, int> m;
    while (cin >> s)
    {
        if (s == "deixar")
        {
            int n;
            cin >> n;
            ++m[n];
        }
        else if (s == "endur")
        {
            int n;
            cin >> n;
            
                --m[n];
                if (m[n] < 1)
                {
                    m.erase(n);
                }
            
        }
        auto it =m.rbegin();
        
        int i =0;
        long int suma=0;
        for(it;it!=m.rend() and i<x;++it,++i){
            suma+=it->first;
        }
        cout<<suma<<endl;
    }
}