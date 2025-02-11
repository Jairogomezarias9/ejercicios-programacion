#include <iostream>
using namespace std;
int main() {
    string x;
    cin>>x;
    string y;
    int contador=1;
    int max =1;
    while(cin>>y){
        if(y==x){
            ++contador;
        }
        else if(y!=x) {
            contador=0;
        }

        if(contador>max){
            max=contador;
            
        }

    }
    cout<<max<<endl;
}