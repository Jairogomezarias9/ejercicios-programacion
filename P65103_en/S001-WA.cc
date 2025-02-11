#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    
    int y;

    int contador = 1;

    while (contador <= x and cin >> y)

    {
        contador++;
    }
    
    if (x + 1 == contador and x != 0)
    {
        cout << "At the position " << x << " there is a(n) " << y << endl;
    }
    else
    {
        cout << "Incorrect position.";
    }

    cout << endl;
}