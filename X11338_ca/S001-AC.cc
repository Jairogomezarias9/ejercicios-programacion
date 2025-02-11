#include "BinTree.hh"
#include "ParInt.hh"

void sumak(BinTree<ParInt>& a, int k){
    if(not a.empty()){
        ParInt p(a.value().primer(),a.value().segon()+k);
        BinTree<ParInt> left,right;



        if(not a.left().empty()){
            left=a.left();
            sumak(left,k);

        }
         if(not a.right().empty()){
             right=a.right();
            sumak(right,k);

        }


        a=BinTree<ParInt>(p,left,right);

    }


}