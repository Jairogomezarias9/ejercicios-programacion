#include "Estudiant.hh"
#include <vector>

/* Pre: v no conte repeticions de dni  */
/* Post: si existeix a v algun estudiant amb nota, la primera component del
   resultat es la posicio de l'estudiant de nota maxima de v i la segona
   component es la posicio de l'estudiant de nota minima de v (si hi ha
   empats, s'obte en cada cas la posicio de l'estudiant amb minim DNI); si no
   hi ha cap estudiant amb nota, totes dues components valen -1 */
pair<int, int> max_min_vest(const vector<Estudiant> &v)
{
    pair<int, int> p;
    p.first=-1;
    p.second=-1;

    double notamaxima=10;
    double notaminima=0;

    

    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].te_nota())
        {
            double nota = v[i].consultar_nota();
            if (notamaxima < nota)
            {
                notamaxima = nota;
                p.first=i;
            }
            else if(nota==notamaxima and p.first!=-1){
                if(v[i].consultar_DNI()<v[p.first].consultar_DNI()){
                    p.first=i;
                }
            }
            if (notaminima > nota)
            {
                notaminima = nota;
                p.second=i;
            }
            else if(nota==notaminima and p.second!=-1){
                if(v[i].consultar_DNI()<v[p.second].consultar_DNI()){
                    p.second=i;
                }
            }
        }
        
    }
    return p;
}