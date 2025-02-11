#include <iostream>
using namespace std;
int main()
{

    char z,y=' ';
    int dashcount=0;

    int contadorhappy = 0;
    int contadorsad = 0;

    while (cin >>z)
    {
       


        if(y==':' and z=='-'){
            dashcount++;
        }
        else if(y==':' and z==')' and dashcount>0){
            contadorhappy++;
        }



        if(y=='(' and z=='-'){
            dashcount++;
        }
        else if(y=='(' and z==':' and dashcount>0){
            contadorhappy++;
        }


        if(y==':' and  z=='-'){
            dashcount++;
        }
        else if(y==':' and z=='(' and dashcount>0){
            contadorsad++;
        }

        if(y==')' and z=='-'){
            dashcount++;
        }
        else if(y==')' and z==':' and dashcount>0){
            contadorsad++;
        }

        if(z!='-'){ dashcount=0;}


        if(z!='-'){ y=z;}


      
    }

    cout<<contadorhappy<<" "<<contadorsad<<endl;
}