#include <iostream>
using namespace std;

int main() {

    int x;
    cin>>x;

    while(x>1){
       cout<< x%2;
      x = x/2;

    }
    cout<<x<<endl;
}