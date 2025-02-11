#include <iostream>
#include <vector>
using namespace std;
bool resistant(double x, const vector<double> &v, int esq, int dre)
{
    if (esq > dre)
        return false;
    else
    {

        int m = (esq + dre) / 2;
        if (x == v[m])
            return true;
        else if (m > 0)
        {
            if (v[m] < x and v[m - 1] != x)
            {
                return resistant(x, v, m + 1, dre);
            }
        }
        else if (m < v.size() - 1)
        {
            if (v[m] > x and v[m + 1] != x)
            {
                return resistant(x, v, esq, m - 1);
            }
        }

        return true;
    }
    return false;
}

bool resistant_search(double x, const vector<double> &v)
{
    return resistant(x, v, 0, v.size() - 1);
}

int main()
{
}