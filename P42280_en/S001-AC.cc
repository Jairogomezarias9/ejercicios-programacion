#include <iostream>
using namespace std;
int main()
{
    int altura, base;
    cin >> altura >> base;
    char num;
    int suma=0;
    
    
        for (int i = 0; i < altura; ++i)
        {
            for(int j=0; j<base; ++j){
                cin>> num;
                suma = suma+num%'0';

            }
        }
    
    cout<<suma<<endl;
}