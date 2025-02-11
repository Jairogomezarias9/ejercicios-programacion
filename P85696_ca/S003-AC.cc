#include <iostream>
#include <vector>
using namespace std;
struct Racional {
        int num, den;
    };

    int mcd(int a, int b){
        if(b==0) return a;
        else return mcd(b,a%b);
    }

     Racional racional(int n, int d){
         Racional r;
         r.num=n/mcd(n,d);
         r.den=d/mcd(n,d);
         if(r.den<0){
             r.num=-n/mcd(n,d);
         r.den=-d/mcd(n,d);
         }
         return r;

     }
     int main(){

     }