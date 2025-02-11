#include <iostream>
#include <vector>
using namespace std;

int aux(const vector<double> &v, double x, int esq, int dre)
{
    int m = ((esq + dre) / 2);
    if (esq > dre)
        return -1;
    if (x > v[m])
        return aux(v, x, m + 1, dre);
    if (x < v[m])
        return aux(v, x, esq, m -1);

    if (m == 0 or v[m-1]<x)
        return m;

    return aux(v,x,esq,m-1);
    
}

int first_occurrence(double x, const vector<double> &v)
{
    return aux(v, x, 0, v.size() - 1);
}

int main()
{
    
}