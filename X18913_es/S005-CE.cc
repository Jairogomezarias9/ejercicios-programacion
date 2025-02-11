#include <iostream>
using namespace std;

#include "vectorIOint.hh"

/* Buscar  */    
bool busqueda_lin(const vector<int>& v, int x)
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

int main()
{
  vector<int> v;
  leer_vector_int(v); 
  cout << "Escribe el elemento a buscar: " << endl;
  int x;
  cin >> x; 
  bool b = busqueda_lin(v,x);
  if (b)  cout << "El elemento " << x << " esta en el vector." << endl << endl;
  else cout << "El elemento " << x << " no esta en el vector." << endl << endl;
  cout << "Escribimos el vector para que se vea que no ha cambiado:" << endl;
  escribir_vector_int(v);
}
