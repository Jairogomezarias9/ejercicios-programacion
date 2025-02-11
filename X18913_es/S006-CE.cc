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
         return -1;
}

int main()
{
  vector<int> v;
  leer_vector_int(v); 
  cout << "Escribe el elemento a buscar: " << endl;
  int x;
  cin >> x; 
  int b = busqueda_lin(v,x);
  if (b!=-1)  cout << "El elemento " << x << " esta en el vector." << endl << endl;
  else cout << "El elemento " << x << " no esta en el vector." << endl << endl;
  cout << "Escribimos el vector para que se vea que no ha cambiado:" << endl;
  escribir_vector_int(v);
}
