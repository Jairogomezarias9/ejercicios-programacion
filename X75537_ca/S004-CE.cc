#include <iostream>
#include "BinTree.hh"
#include "searchInBST.hh"




// Pre: t és un BST
// Post: Retorna cert si i només si x apareix a t
bool searchInBST(BinTree<int> t, int x){

    if(t.empty()){
        return false;
    }
    else if(t.value()==x){
        return true;
    }
    else if(x>t.value()){
         return searchInBST(t.right(), x);
    }
    else if(x<t.value()){
        return  searchInBST(t.left(), x);
    }
    
}