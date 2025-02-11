#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v){
    int resultat=0;
    int n=u.size();
    for(int i =0; i<n;++i){
        resultat+=u[i]*v[i];
        
    }
    return resultat;
    
}