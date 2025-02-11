#include <iostream>
using namespace std;

int factorial(int n)
{
    int factoria = 1;
    for (int i = 0; i < n; ++i)
    {
        factoria = factoria * i;
    }
    return factoria;
}
int main()
{
    int n;
    while (cin >> n)
    {
        cout << factorial(n) << endl;
    }
}