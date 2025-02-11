#include <iostream>
#include <map>
using namespace std;

struct Info
{
    string code;
    int price;
};

int main()
{
    map<int, Info> M;
    char c;
    while (cin >> c)
    {
        if (c == 'n')
        {
            cout << "num: " << M.size();
        }
        else if (c == 'u')
        {
            string code;
            int length, price;
            cin >> code >> length >> price;
            Info i;
            i.code = code;
            i.price = price;
            M[length] = i;
        }
        else if (c == 'q')
        {
            int length;
            cin >> length;
            auto it = M.find(length);
            if (it == M.end())
            {
                cout << -1 << endl;
            }
            else
                cout << M[length].price;
        }
        else if (c == 'p')
        {
            cout << string(10, '-') << endl;
            auto it = M.begin();
            for (it; it != M.end(); ++it)
            {
                cout << it->second.code << " " << it->first << " " << it->second.price << endl;
            }
            cout << string(10, '*') << endl;
        }
        else
        { // c == 's'
            if (M.size() < 2)
            {
                cout << "no" << endl;
            }
            else
            {
                auto it = M.begin();

                ++it;
                cout << it->second.code << " " << it->first << " " << it->second.price << endl;
            }
        }
    }
}
