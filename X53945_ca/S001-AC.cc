
#include "BinTree.hh"
#include "treeOfSumsOfAncestors.hh"
BinTree<int> treeOfSumsOfAncestorsaux(const BinTree<int> t, int sum){
    if(t.empty()){
        return BinTree<int> ();
    }
    int nuevasum=sum+t.value();
    return BinTree<int>(nuevasum, treeOfSumsOfAncestorsaux(t.left(),nuevasum),treeOfSumsOfAncestorsaux(t.right(),nuevasum));
}

BinTree<int> treeOfSumsOfAncestors(const BinTree<int> t){
    return treeOfSumsOfAncestorsaux(t,0);
}


    