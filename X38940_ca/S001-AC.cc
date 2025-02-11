#include "BinTree.hh"

// Pre:  t és un arbre no buit que representa una expressió booleana correcta
//       sobre els true,false i els operadors and,or,not.
// Post: Retorna l'avaluació de l'expressió representada per t.
bool evaluate(const BinTree<string> t)
{
    if(t.value()=="true"){
        return true;
    }
    else if(t.value()=="false"){
        return false;
    }

    
     if (t.value() == "and")
    {
        
        if(not evaluate(t.left())){
            return false;
        }
        else if(not evaluate(t.right())){
            return false;
        }
        else return true;
        
    }
    else if (t.value() == "or")
    {
        if(evaluate(t.left())){
            return true;
        }
        else if(evaluate(t.right())){
            return true;
        }
        else return false;
    }

    else if (t.value() == "not")
    {
        if(evaluate(t.left())){
            return false;
        }
        else return true;
    }
    return 0;
}