#include <iostream>
#include "BinTree.hh"
#include "searchInBST.hh"




// Pre: t és un BST
// Post: Retorna cert si i només si x apareix a t
bool searchInBST(BinTree<int> t, int x){
    if(t.value()==x){
        return true;
    }
    else if(x>t.value()){
         searchInBST(t.right(), x);
    }
    else if(x<t.value()){
         searchInBST(t.left(), x);
    }
    return false;
}