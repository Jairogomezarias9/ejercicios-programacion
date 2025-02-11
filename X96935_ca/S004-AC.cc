#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n / 2; ++i)
    {
        int aux;
        cin >> aux;
        s.push(aux);
    }
    if (n % 2 != 0)
    {
        int aux;
        cin >> aux;
    }
    int i = 0;
    bool iguales = true;
    while (i < n / 2 and iguales)
    {
        int x;
        cin >> x;
        if (x != s.top())
            iguales = false;
        s.pop();
        ++i;
    }
    if (iguales)
        cout << "SI" << endl;
    else
        cout << "NO" << endl;
}
