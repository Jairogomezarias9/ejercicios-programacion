#include "BinTree.hh"
#include "numTwins.hh"




// Pre:
// Post: Retorna el nombre de parelles de nodes de t que tenen el mateix node pare i el mateix valor
int numTwins(BinTree<int> t){
    if(not t.empty()){
  
    else if(t.right().value()==t.left().value()){
        return 1;
    }
    else return numTwins(t.left())+numTwins(t.right());
    }
    return 0;
}
