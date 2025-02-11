
 #include <iostream>
 #include <vector>
 using namespace std;
 
 int busqueda_lin(const vector<int>& v, int x){
     int n=v.size();
     for(int i =0;i<n;++i){
         if(x==v[i]){
             return i;
         }
     }
     return n;
 }
 int main(){

 }