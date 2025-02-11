#include <iostream>
using namespace std;

int main() {
    int x,y;

    while(cin>>x>>y){
        int aux=0;
        cout<<"suma de cubs entre "<<x<<" i "<<y<<": ";
        

        for(int i=x; i<=y; i++){
            aux=aux+i*i*i;

        }
        cout<<aux<<endl;
    }

}