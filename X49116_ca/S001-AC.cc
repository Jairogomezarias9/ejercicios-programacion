#include <vector>
using namespace std;

struct parint
{
    int prim, seg;
};

parint max_min1(const vector<int> &v)
/* Pre: v.size()>0 */
/* Post: el primer componente del resultado es el valor maximo de v;
   el segundo componente del resultado es el valor minimo de v */
{
    parint p;
    int n = v.size();
    if (n == 0)
    {
        p.prim = -1;
        p.seg = 1;
    }

    else
    {
        p.prim = v[0];
        p.seg = v[0];

        for (int i = 1; i < n; ++i)
        {
            if (v[i] > p.prim)
            {
                p.prim = v[i];
            }
            else if (v[i] < p.seg)
            {
                p.seg = v[i];
            }
        }
    }

    return p;
}

pair<int, int> max_min2(const vector<int> &v)
/* Pre: v.size()>0 */
/* Post: el primer componente del resultado es el valor maximo de v;
el segundo componente del resultado es el valor minimo de v */
{
    pair<int, int> p;

    int n = v.size();
    if (n == 0)
    {
        p.first = -1;
        p.second = 1;
    }

    else
    {
        p.first = v[0];
        p.second = v[0];

        for (int i = 1; i < n; ++i)
        {
            if (v[i] > p.first)
            {
                p.first = v[i];
            }
            else if (v[i] < p.second)
            {
                p.second = v[i];
            }
        }
    }
    return p;
   


}

void max_min3(const vector<int> &v, int &x, int &y)
/* Pre: v.size()>0 */
/* Post: x es el valor maximo de v;  y es el valor minimo de v */
{
    int n = v.size();
    if (n == 0)
    {
        x = -1;
        y = 1;
    }

    else
    {
        x = v[0];
        y = v[0];

        for (int i = 1; i < n; ++i)
        {
            if (v[i] > x)
            {
                x = v[i];
            }
            else if (v[i] < y)
            {
                y = v[i];
            }
        }
    }
}