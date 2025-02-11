#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v){
    vector<double> w;
    int n=u.size();
    for(int i =0; i<n;++i){
        w[i]=u[i]*v[i];
        cout<<w[i];
    }
    cout<<endl;
    
}