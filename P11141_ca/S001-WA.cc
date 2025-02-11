#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Estudiant
{
    int dni;
    string nom;
    double nota; // La nota és un valor entre 0 i 10, o -1 que representa NP
    bool repetidor;
};

void informacio(const vector<Estudiant> &es, double &min, double &max, double &mitj)
{
    int n = es.size();
    int resultat = 0;

    int contador = 0;
    max = -1;
    min = 10;

    for (int i = 0; i < n; ++i)
    {
        if (es[i].nota >= 0 and not es[i].repetidor)
        {
            if (es[i].nota > max)
            {
               max= es[i].nota;
                
            }
            if (es[i].nota < min)
            {
                min=es[i].nota;
                
                
            }
            resultat = resultat + es[i].nota;
            ++contador;
        }
        
    }

    if (max == -1)
    {
        min = -1;
        mitj = -1;
    }
    else
    {
        mitj=resultat/contador;
    }
}

int main(){
}