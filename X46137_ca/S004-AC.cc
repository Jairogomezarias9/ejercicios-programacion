#include <iostream>
#include <vector>
using namespace std;

void back(int n, vector<char> &total, int as, int bs)
{
    if (total.size() == n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << total[i];
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < 2; ++i)
        {
            if (i == 0)
            {
                if ( abs((as+1) - bs) <= 2)
                {
                    total.push_back('a');
                    back(n, total, as + 1, bs);
                    total.pop_back();
                }
            }
           else if (i == 1)
            {
                if ( abs(as - (bs+1)) <= 2)
                {
                    total.push_back('b');
                    back(n, total, as, bs + 1);
                    total.pop_back();
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<char> total;
    back(n, total, 0, 0);
}