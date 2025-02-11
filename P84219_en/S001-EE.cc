#include <iostream>
#include <vector>
using namespace std;

int aux(const vector<double> &v, double x, int esq, int dre)
{
    int m=((esq+dre)/2);
    if(esq>dre) return -1;
    else if(x>v[esq]) return aux(v,x,m+1,dre);
    else if(x<v[dre]) return aux(v,x,esq,m);

    if(m==0 or v[m]==x) return m;
    
    
}

int first_occurrence(double x, const vector<double> &v)
{
    return aux(v, x, 0, v.size() - 1);
}

int main()
{
    
}