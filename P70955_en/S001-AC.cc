#include <iostream>
using namespace std;

int main() {

    int y,d,h,m,s;
    cin >>y>>d>>h>>m>>s;

  int sumatotal;
 sumatotal=((y*365*86400)+(d*86400)+(h*3600)+(m*60)+s);

 cout<<sumatotal<< endl;
}