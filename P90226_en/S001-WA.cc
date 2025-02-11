#include <iostream>
#include <string>
using namespace std;

int main(){

string x,y;
cin>>x>>y;

if (x>y) cout<<x<<" > "<<y<< endl;
if (y>x)  cout<<y<<" > "<<x<< endl;
else  cout<<x<<" = "<<y<< endl;
}