#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//cerca dicotòmica
void numberOccurrences(const string &s, int &n1, int &n2, int &n3){
    int esq=0;
    int dre=s.size()-1;
    while(esq<dre){
        int mitad=(esq+dre)/2;
        if(s[mitad]==s[0]){

            esq=mitad+1;

        }
        else dre=mitad;
    }
    n1=esq;
    dre=s.size()-1;


    while(esq<dre){
        int mitad=(esq+dre)/2;
        if(s[mitad]==s[n1]){
            esq=mitad+1;
        }
        else dre=mitad;
    }
    n2=esq-n1;
    n3=s.size()-esq;
}




int numberHappyOrSadSubsequences(const string &s)
{
    int n1, n2, n3;
    numberOccurrences(s, n1, n2, n3);
    return n1 * n2 * n3;
}


int main(){
    string s;
    cin>>s;
    cout<<numberHappyOrSadSubsequences(s)<<endl;
}