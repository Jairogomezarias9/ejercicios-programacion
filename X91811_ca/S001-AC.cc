#include "BinTree.hh"

void suma_a(BinTree<int> a, int &suma, int i)
{
    
    if (!a.empty() and i % 2 == 0)
        suma += a.value();
    if (!a.empty())
    {
        suma_a(a.left(), suma, i + 1);
        suma_a(a.right(), suma, i + 1);
    }
}
    // Pre:
    // Post: Retorna la suma dels valors de t a profunditat parell
    int sumAtDepthEven(BinTree<int> t)
    {
        int i = 0;
        int suma=0;
        suma_a(t,suma, i);
        return suma;
    }
