#include "BinTree.hh"
#include "reverseTree.hh"

// Pre:  
// Post: retorna el revessat de t.
BinTree<int> reverseTree(BinTree<int> t){
    int aux;
    BinTree<int> left,right;
    if(t.empty()){
        return BinTree<int>();
    }
    
    
    else{
        aux=t.value();
        if(not t.left().empty()){
            left= reverseTree(t.left());


        }
         if(not t.right().empty()){
            right= reverseTree(t.right());


        }
    }
    return BinTree<int>(aux,right,left);

}