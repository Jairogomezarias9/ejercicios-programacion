#include <iostream>
#include <string>
using namespace std;

int main(){

string x,y;
cin>>x>>y;

if (x>y) cout<<y<<" < "<<x<< endl;
if (y>x)  cout<<x<<" < "<<y<< endl;
else  cout<<x<<" = "<<y<< endl;
}