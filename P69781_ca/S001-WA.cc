#include <iostream>
#include <map>
using namespace std;
int main(){
    int x,y,n;
    map<int,int> m;
    while(cin>>x){
        cin>>y>>n;
        int cicle=1;
        m[n]=0;
        
            while (cicle < 100000001)
            {
                auto it = m.find(n);
                if (it == m.end())
                {
                    if (n % 2 == 0)
                    {
                        n = n / 2 + x;
                        m[n] = cicle;
                    }
                    else {
                        n=3*n+y;
                        m[n]=cicle;
                    }
                    ++cicle;
                }
                else{
                    cout<<cicle-(it->second)<<endl;
                    break;
                }

                
            }
            if(cicle==100000000){
            cout<<n<<endl;}
        
    }
}