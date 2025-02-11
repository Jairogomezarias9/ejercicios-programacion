#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string cola;
    vector<queue<string>> v(n);
    getline(cin,cola);
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

    string s;

    while (cin >> s)
    {

        if (s == "SURT")
        {
            int num;
            cin >> num;
            if ((num >= 1 or num <= n) and (not v[num - 1].empty()))
            {
                cout << v[num - 1].front() << endl;
                v[num - 1].pop();
            }
        }

        else if (s == "ENTRA")
        {
            string i;
            int m;
            cin >> i >> m;

            if (m >= 1 and m <= n)
            {
                v[m - 1].push(i);
            }
        }
    }
    cout << endl;
    cout << "CONTINGUTS FINALS" << endl
         << "-----------------" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "cua " << i + 1<<":";
        while (not v[i].empty())
        {
            cout << " " << v[i].front();
            v[i].pop();
        }
        cout << endl;
    }
}
