#include <iostream>
using namespace std;

bool c_frac(int n1, int d1, int n2, int d2)
{
   return (n1/d1)<(n2/d2)
}
int main()
{
    int un, dos, tres, quatre;
    while (cin >>un>>dos>>tres>>quatre)
    {
        

        if (c_frac(un, dos, tres, quatre))
        {
            cout << "si" << endl;
        }
        else
            cout << "no" << endl;
    }
}