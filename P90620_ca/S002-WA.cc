#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b=0;
    int c=0;
   
 bool trobat =false;
    cin >> a>>b>>c ;

    while (c!=0 and not trobat and cin>>c){
         if(a<=3143 and b>=3143 and c<=3143){
         trobat=true;}

         a=b;
         b=c;
        
    }
    if(trobat) cout<<"SI"<<endl;
    else cout<<"NO"<<endl;
}