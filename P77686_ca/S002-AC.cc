#include <iostream>
using namespace std;
bool es_capicua(int n)
{
    int s = n;
    int invertit = 0;
    int f=0;
    int aux = n;
    while (aux > 0)
    {
        invertit=invertit*10+aux%10;
        aux = aux/10;
        
    }
    f=invertit;
    
    return s == f;
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (es_capicua(n))
        {
            cout << "true" << endl;
        }
        else
            cout << "false" << endl;
    }
}
