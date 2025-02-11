#include <iostream>
#include <cmath>
using namespace std;

int quadrat(double s)
{
    return s * s;
}
double arrel(double s)
{
    return sqrt(s);
}
int main()
{
    cout.setf(ios::fixed);
    cout.precision(6);
    double s;
    while(cin >> s){
    cout << quadrat(s) << " " << arrel(s) << endl;
    }
}