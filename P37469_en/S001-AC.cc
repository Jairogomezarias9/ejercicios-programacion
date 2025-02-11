#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

 int m=n/60;
 

 int s=n%60;
 
 int h=m/60;
 m = m%60;

  cout <<  h  <<" "<<  m  <<" "<<  s << endl;
}