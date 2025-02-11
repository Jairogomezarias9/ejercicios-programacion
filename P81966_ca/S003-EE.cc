#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre){

    esq=0;
    dre=v.size()-1;

    
    while(esq<=dre){
        int mitad=(dre+esq/2);
        if(x>v[mitad]) esq=mitad+1;
        else if(x<v[mitad]) dre=mitad-1;
        else return mitad;
    }
    return -1;
}