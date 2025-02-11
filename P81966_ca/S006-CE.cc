#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){
   while(right<=left){
    int m=(right+left)/2;
    if(x>v[m]){
        left=m;
    }
    else if(v[m]>x){
        right=m;

    }
    else return m;

   }
   return -1;
   
}


int main(){

}