#include <iostream>
using namespace std;

int main() {

 int x;
 cin>>x;
 int i=1;
 
 cout<<"The number of digits of "<<x;
   while(x>=10){
       x=x/10;
       i++;
   }
   cout<< " is "<<i<<"."<<endl;
}