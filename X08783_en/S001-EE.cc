#include <iostream>
using namespace std;
int main()
{

    int b, n;
    int contador = 0;

    while (cin >> b >> n)
    {
        
        while (n >0)
        {
            n=n/b;
            contador++;

            
            
        }

        cout << contador << endl;
    }
}