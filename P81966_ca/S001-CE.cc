#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre){

    esq=0;
    dre=v.size()-1;

    int mitad=(dre+esq/2);
    while(esq<=dre){
        if(x>v[mitad]) esq=mitad+1;
        else if(x<v[mitad]) dret=mitad-1;
        else return mitad;
    }
    return -1;
}