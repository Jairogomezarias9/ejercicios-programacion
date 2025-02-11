#include "BinTree.hh"
#include "longestLeftmostPath.hh"
int heigth(const BinTree<int> &a)
{
    int x;
    if (a.empty())
        x = 0;
    else
    {
        int y = heigth(a.left());
        int z = heigth(a.right());
        if (y >= z)
            x = y + 1;
        else
            x = z + 1;
    }
    return x;
}

void longestLeftmostPathaux(BinTree<int> t, list<int> &l)
{
    int a=0;
    int b=0;
    if(not t.empty()){

    if (not t.left().empty() )
    {
        
        a=heigth(t.left());
        
    }
     if ( not t.right().empty())
    {
        
        b=heigth(t.right());
        
    }

    if(a>=b and not t.empty()){
        l.push_back(t.value());
        longestLeftmostPathaux(t.left(), l);
    }
    else if(a<b and not t.empty()){
        l.push_back(t.value());
        longestLeftmostPathaux(t.right(), l);
    }
    }
}
// Pre:
// Post: Retorna la llista d'elements que es troben a t, baixant des de l'arrel i
//       seguint el camí més llarg. En cas de varis camins màxims,
//       escull el de més a l'esquerra.
list<int> longestLeftmostPath(BinTree<int> t)
{
    list<int> l;
    longestLeftmostPathaux(t, l);
    return l;
}