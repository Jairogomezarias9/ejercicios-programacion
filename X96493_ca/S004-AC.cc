#include <iostream>
#include <vector>
using namespace std;
// Pre: Sigui n el tamany v.size(). Llavors, per a cada i a {0..n-2}, es compleix |v[i]-v[i+1]|<=2.
//      A més, només hi ha un i a {0..n-2} que compleixi |v[i]-v[i+1]|=1.
// Post: La funció retorna el i praticular que compleix |v[i]-v[i+1]|=1.
int positionDistance1(const vector<int> &v){
    int dre=v.size();
    int esq=0;
    while(esq<=dre){
        int mitad=(esq+dre)/2;
        if(v[mitad]%2==v[0]%2){
            esq=mitad+1;
            
        }
        else dre=mitad-1;
    }
    return esq-1;

}

int main(){
    vector<int> v(9);
    for(int i =0;i<8;++i){
        cin>>v[i];
    }
    cout<<positionDistance1(v)<<endl;
}