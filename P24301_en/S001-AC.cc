#include <iostream>
#include <vector>
using namespace std;

void llegirvector(vector<int> &v){
    int n=v.size();
    for(int i =0;i<n;++i){
        cin>>v[i];
    }
}

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
     vector<int> vectorconcatenat;
     vectorconcatenat = v1;
    int mida2=v2.size();

    for(int i =0;i<mida2;++i){
        vectorconcatenat.push_back(v2[i]);
    }
    return vectorconcatenat;

}

void escriurevectorfinal(const vector<int> &v){
    int n=v.size();
    for(int i =0;i<n;++i){
        cout<<v[i];
    }
}


int main(){
    int mida1,mida2;
    while(cin>>mida1>>mida2){
        vector<int> v1(mida1);
        llegirvector(v1);
        vector<int> v2(mida2);
        llegirvector(v2);
        vector<int>final= concatenation(v1,v2);
        escriurevectorfinal(final);

    }
}