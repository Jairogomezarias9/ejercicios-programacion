#include <iostream>
#include <vector>

using namespace std;

int dere(int esq, int dre, double x, const vector<double> &v)
{
    if (esq > dre)
    {
        return esq;
    }
    else
    {
        int m = (esq + dre) / 2;
        if (v[m] > x)
        {
            return dere(esq, m - 1, x, v);
        }
        else
        {
            return dere(m+1, dre, x, v);
        }
        return m;
    }
}

int mes_a_la_dreta(double x, const vector<double> &v)
{
    return dere(0, v.size() - 1, x, v);
}


int main(){
    
}