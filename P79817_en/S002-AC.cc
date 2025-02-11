#include <iostream>
using namespace std;

int main(){

    int x,y;
    int multpli = 1;
    
    while(cin>>x>>y){
        int i = 0;
        if(y!=0){
            while(i<y){
                multpli = multpli*x;
                ++i;

            }
        }
        cout<<multpli<<endl;
        multpli = 1;
        
    }
}