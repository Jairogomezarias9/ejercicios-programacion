#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int i =0;
    int j=0;
    while(j<3){
        i=i+x%10;
        x=x/10;
        ++j;

    }
    cout<<i<<endl;
}