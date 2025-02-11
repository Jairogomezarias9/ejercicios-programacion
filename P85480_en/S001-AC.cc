#include <iostream>
#include <vector>
using namespace std;



void llegirvector(vector<int> &seq){
    int n=seq.size();
    
    for(int i =0;i<n;++i){
        cin>>seq[i];
    }
    

}
bool esprimer(int num){
    bool resultat =true;
    int divisor=2;
    while(resultat and divisor*divisor <=num){
        if(num%divisor==0)resultat=false;
        ++divisor;
    }
    return resultat;

}

bool sumadeprimers(const vector<int>& v){
    bool resultat=false;
    int n=v.size();
    int primer=0;
    while(not resultat and primer<n){
        int segon=0;
        while(not resultat and segon<n){
            if(primer!= segon){
                resultat=(esprimer(v[primer]+v[segon]));
            }

            ++segon;
        }
        ++primer;
    }
    return resultat;


}


int main(){
    int x;
    while(cin>>x){
        vector<int> v(x);
        llegirvector(v);
        if(sumadeprimers(v)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;

    }

}

