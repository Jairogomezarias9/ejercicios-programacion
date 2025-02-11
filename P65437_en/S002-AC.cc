#include <iostream>
using namespace std;

void swap2(int& x, int& y)
{
    int aux = x;
    x = y;
    y = aux;
}

int main()
{
    int a, b;
    while (cin >>a >> b)
    {
        swap2(a, b);
        cout<<a<<" "<<b <<endl;
    }
}