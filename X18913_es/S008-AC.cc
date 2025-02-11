#include <iostream>
using namespace std;

#include "vectorIOint.hh"

/* Buscar  */    
int busqueda_lin(const vector<int>& v, int x)
/* Pre: cierto */
/* Post: el resultado indica si x está en v */
{
    int n=v.size();
   for(int i =0;i<n;++i){
      if(x==v[i]){
        return i;
             }
         }
         return n;
}

