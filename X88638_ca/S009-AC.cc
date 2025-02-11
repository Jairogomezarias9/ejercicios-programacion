#include "BinTree.hh"
#include "numTwins.hh"

// Pre:
// Post: Retorna el nombre de parelles de nodes de t que tenen el mateix node pare i el mateix valor
int numTwins(BinTree<int> t)
{
    //caso base: arbol vacío
    if (t.empty()){
        return 0;
    }

    //caso general

     //miramos que la derecha y la izquierda no sean vacíos para no acceder a posiciones innecesarias
    else if (t.left().empty())
    {
        return numTwins(t.right());
    }

    else if (t.right().empty())
    {
        return 0;
    }


    //vamos incrementando el valor de la suma haciendo llamadas recursivas

    if (t.right().value() == t.left().value())
    {
        return  numTwins(t.left())+numTwins(t.right())+1;
    }
    //en caso que no sean iguales, llamamos a la recursividad sin sumarle ningun valor

    else
    {
        return numTwins(t.left()) + numTwins(t.right());
    }
}
