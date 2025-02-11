#include <iostream>
#include <list>
using namespace std;

int main()
{
    string s;
    list<int> l;
    while (cin >> s)
    {
        if (s == "pop_front")
        {
            if (l.empty())
            {
                cout << "error" << endl;
            }
            else
            {
                l.pop_front();
            }
        }

        else if (s == "pop_front")
        {
            if (l.empty())
            {
                cout << "error" << endl;
            }
            else
            {
                l.pop_back();
            }
        }

        else if (s == "push_back")
        {
            int n;
            cin >> n;
            l.push_back(n);
        }
        else if (s == "push_front")
        {
            int n;
            cin >> n;
            l.push_front(n);
        }

        else if (s == "get_mid_value")
        {

            if ((l.size() % 2) == 0)
            {
                cout << "error" << endl;
            }
            else
            {
                list<int>::const_iterator it = l.begin();
                for (int i = 0; i < l.size() / 2; ++i)
                {
                    ++it;
                }
                cout << *it << endl;
            }
        }
    }
}