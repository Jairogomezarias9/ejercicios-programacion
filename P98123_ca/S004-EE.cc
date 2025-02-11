#include <iostream>
#include <map>
#include <set>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s;
    set<int> m;
    while (cin >> s)
    {
        if (s == "deixar")
        {
            int n;
            cin >> n;
            m.insert(n);
        }
        else if (s == "endur")
        {
            int n;
            cin >> n;

            m.erase(n);
        }
        auto it = m.rbegin();
        int i = 0;
        long int suma = 0;
        for (it; it != m.rend() and i < x; ++it, ++i)
        {
            suma += *it;
        }
        cout << suma << endl;
    }
}