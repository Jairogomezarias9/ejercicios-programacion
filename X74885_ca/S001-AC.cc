#include <iostream>
#include "BinTree.hh"
#include "utils.hh"
using namespace std;

// Pre:  t és un arbre no buit que representa una expressió correcta
//       sobre els naturals i els operadors +,-,*.
//       Les operacions no produeixen errors d'overflow.
// Post: Retorna l'avaluació de l'expressió representada per t.
int evaluate(BinTree<string> t)
{
    int resultado = 0;
    if (isNumber(t.value()))
    {
        resultado=mystoi(t.value());
    }
    else
    {
        if (t.value() == "*")
        {
            resultado = evaluate(t.left()) * evaluate(t.right());
        }
        else if (t.value() == "+")
        {
            resultado = evaluate(t.left()) + evaluate(t.right());
        }
        else if (t.value() == "-")
        {
            resultado = evaluate(t.left()) - evaluate(t.right());
        }

        
    }
    return resultado;
}