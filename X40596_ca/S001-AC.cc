#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int n, m;

void escriu(vector<int> &v)
{
    cout << "(";
    bool si = true;
    for (int i = 0; i < v.size(); ++i)
    {
        if (not si)
        {
            cout << ",";
        }
        cout << v[i];
        si = false;
    }
    cout << ")";

    cout << endl;
}

void combinacions(int n, int m, int k, vector<int> &v,vector<bool> &usado, int ant)
{
    if (n == k)
    {
        escriu(v);
        
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            if (not usado[i] and (abs(ant - i) <= m or v.size()==0))
            {
                usado[i]=true;
                v.push_back(i);
                combinacions(n, m, k + 1, v,usado,i);
                v.pop_back();
                usado[i]=false;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    vector<int> v;
    vector<bool> usado(n+1,false);
    combinacions(n, m, 0, v,usado,0);
}