#include <iostream>
using namespace std;
int main()
{
    int x;
    int contador = 0;

    while (cin >> x)
    {
        
        while (x > 99)
        {
            if ((x%10 < x/10%10) and (x/100%10 < x/10%10))
            {
                ++contador;
            }
            
                        
            x = x / 10;
            
        }
        cout << contador << endl;
        contador=0;
        
        
        
    }
}