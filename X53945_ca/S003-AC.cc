
#include "BinTree.hh"
#include "treeOfSumsOfAncestors.hh"


BinTree<int> treeOfSumsOfAncestorsaux(const BinTree<int> t, int sum){
    //caso base
    if(t.empty()){
        return BinTree<int> ();
    }

    //caso general
    sum=sum+t.value();
    return BinTree<int>(sum, treeOfSumsOfAncestorsaux(t.left(),sum),treeOfSumsOfAncestorsaux(t.right(),sum));
}



BinTree<int> treeOfSumsOfAncestors(const BinTree<int> t){
    //llama a la funcion que contiene el parametro de la suma
    return treeOfSumsOfAncestorsaux(t,0);
}


    