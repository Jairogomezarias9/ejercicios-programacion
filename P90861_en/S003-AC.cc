#include <vector>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string cola;
    vector<queue<string>> v(n);
    getline(cin, cola);
    for (int i = 0; i < n; ++i)
    {
        getline(cin, cola);
        string aux;
        stringstream sn(cola);
        while (sn >> aux)
        {
            v[i].push(aux);
        }
    }
    cout << "DEPARTS" << endl;
    cout << "-------" << endl;
    string op;
    while (cin >> op)
    {
        if (op == "LEAVES")
        {
            int a;
            cin >> a;
            if (a >= 1 and a <= n)
            {
                --a;
                if (not v[a].empty())
                {
                    cout << v[a].front() << endl;
                    v[a].pop();
                }
            }
        }
        else if (op == "ENTERS")
        {
            string s;
            int cola;
            cin >> s >> cola;
            --cola;
            if (cola >= 0 and cola < n)
                v[cola].push(s);
        }
    }
    cout << endl;
    cout << "FINAL CONTENTS" << endl;
    cout << "--------------" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "queue " << i + 1 << ":";
        while (not v[i].empty())
        {
            cout << " " << v[i].front();
            v[i].pop();
        }
        cout << endl;
    }
}
