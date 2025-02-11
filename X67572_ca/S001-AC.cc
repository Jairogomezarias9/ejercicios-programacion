#include <iostream>
#include <vector>
using namespace std;

void back(int n, vector<string> &s, vector<string> &total, int k, vector<bool> &used)
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
        for (int i = 0; i < n; ++i)
        {
            if (not used[i])
            {
                if (total.empty() or total.back().back() != s[i][0])
                {
                    total.push_back(s[i]);
                    used[i] = true;
                    back(n, s, total, k + 1, used);
                    total.pop_back();
                    used[i] = false;
                }
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    vector<string> total;
    vector<bool> used(n, false);
    back(n, s, total, 0, used);
}