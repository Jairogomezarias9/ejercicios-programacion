#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int y;
    int contador=0;
    while(cin>>y){
        if(y==0){

        }
        else if(x%y==0)++contador;
    }
    cout<<contador<<endl;
}