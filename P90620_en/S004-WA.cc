#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b=0;
    int c=0;
   
 bool trobat =false;
    cin >> a>>b>>c ;

    while (cin>>c and c!=0){
         if(b>=3143 and a<b and c<b){
         trobat=true;}

         a=b;
         b=c;
        
    }
    if(trobat) cout<<"SI"<<endl;
    else cout<<"NO"<<endl;
}