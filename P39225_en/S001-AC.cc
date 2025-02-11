#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cin >> x;

    

    int contador = 1;

    while (cin >> y and x != -1 and contador<x)
    {
        ++contador;
       
    }
     cout << "At the position " << contador << " there is a(n) " <<y<<"."<<endl;
}