#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z){

    if(x>y and x>z and y>z) return x+z;
    else if(x>y and x>z and z>y) return x+y;
    else if(y>x and y>z and x>z) return y+z;
    else if(y>x and y>z and z>x) return x+z;
    else if(z>y and z>x and y>x) return x+z;
    else return z+y;
    
}

int main(){
    int x,y,z;

    while(cin>>x>>y>>z){
        cout<<sum_min_max(x,y,z)<<endl;
    }
}