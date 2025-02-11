#include <iostream>
using namespace std;

int main() {

    int x;
    cin>>x;
    int n=1;

    while(n<=x) {
        cout<<x<<" x "<<n<<" = "<<n*x<<endl;
        ++n;
    }
}