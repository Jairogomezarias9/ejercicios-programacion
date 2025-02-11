#include <iostream>
using namespace std;
int main()
{
    int x;
    int contador = 0;

    while (cin >> x)
    {
        
        while (x > 0)
        {
            if ((x%10 <= x%100) and (x%1000 <= x%100))
            {
                ++contador;
            }
            x = x / 10;
            
        }
        cout << contador << endl;
        contador=0;
        
        
        
    }
}