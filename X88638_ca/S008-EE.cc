#include "BinTree.hh"
#include "numTwins.hh"

// Pre:
// Post: Retorna el nombre de parelles de nodes de t que tenen el mateix node pare i el mateix valor
int numTwins(BinTree<int> t)
{
    if (not t.empty())
    {

        if (t.right().value() == t.left().value())
        {
            return 1;
        }
        else
        {
            int suma1=0;
            int suma2=0;
            if (not t.left().empty())
            {
                 suma1=numTwins(t.left());
            }
            if(not t.right().empty()){
                 suma2=numTwins(t.right());
            }
            return suma1+suma2;
        }
        
    }
    return 0;
}
