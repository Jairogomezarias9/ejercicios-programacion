#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
struct Punt
{
    double x, y;
};
double distancia(const Punt &a, const Punt &b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
int main()
{
    Punt a;
    Punt b;
    cin >> a.x >> a.y >> b.x >> b.y;
    cout << distancia(a, b) << endl;
}