#include <iostream>
#include "BinTree.hh"
using namespace std;



// Pre:
// Post: Retorna la suma dels valors de t
int sumOfTree(BinTree<int> t){
    if(t.empty()){
        return 0;
    }
    else return t.value()+sumOfTree(t.left())+sumOfTree(t.right());

}