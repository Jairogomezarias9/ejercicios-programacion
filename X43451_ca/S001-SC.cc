#include "Estudiant.hh"
#include <vector>

void arrodonir_vector(vector<Estudiant> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].te_nota())
        {

            v[i].modificar_nota(((int)(10. * (v[i].consultar_nota() + 0.05))) / 10.0);
        }
    }
}
