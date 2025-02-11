#include <iostream>
#include <vector>
using namespace std;

int posicio(double x, const vector<double>& v, int esq, int dre){


    
    while(esq<=dre){
        int mitad=((dre+esq)/2);
        if(x>v[mitad]) esq=mitad+1;
        else if(x<v[mitad]) dre=mitad-1;
        else return mitad;
    }
    return -1;
}
int main(){

}