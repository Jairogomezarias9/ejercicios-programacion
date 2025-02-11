#include <iostream>
#include <vector>
using namespace std;
struct Rellotge
{
    int h; // hores (0<=h<24)
    int m; // minuts (0<=m<60)
    int s; // segons (0<=s<60)
};
Rellotge mitja_nit()
{
    Rellotge rellotge;
    rellotge.h = 0;
    rellotge.m = 0;
    rellotge.s = 0;
    return rellotge;
}
void incrementa(Rellotge &r)
{
    ++r.s;
    if (r.s > 59)
    {
        r.s = 0;
        ++r.m;
        if (r.m > 59)
        {
            r.m = 0;
            ++r.h;
            if (r.h > 23)
                r.h = 0;
        }
    }
}
void escriu(const Rellotge &r)
{
    // Print hora
    if (r.h < 10)
        cout << '0';
    cout << r.h << ':';
    // Print minuts
    if (r.m < 10)
        cout << '0';
    cout << r.m << ':';
    // Print segons
    if (r.s < 10)
        cout << '0';
    cout << r.s;
    cout << endl;
}
int main()
{
}
