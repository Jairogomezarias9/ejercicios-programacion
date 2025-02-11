#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
bool applyOneRule(vector<char> &v, char follow)
{
    // v → E  no es pot aplicar si ve seguida de =
    int n = v.size();
    if (v[n - 1] == 'v' and (follow != '='))
    {
        v[n - 1] = 'E';
        return true;
    }

    // n → E
    else if (v[n - 1] == 'n')
    {
        v[n - 1] = 'E';
        return true;
    }

    // E*E → E
    else if (n >= 2 and v[n - 1] == 'E' and v[n - 2] == '*' and v[n - 3] == 'E')
    {
        v.pop_back();
        v.pop_back();
        return true;
    }



    // E+E → E  no es pot aplicar si ve seguida de *

    else if (n >= 3 and follow != '*' and v[n - 1] == 'E' and v[n - 2] == '+' and v[n - 3] == 'E')
    {
        v.pop_back();
        v.pop_back();
        return true;
    }

    // E<E → E  no es pot aplicar si ve seguida de * o +

    else if (n >= 3 and follow != '*' and follow != '+' and v[n - 1] == 'E' and v[n - 2] == '<' and v[n - 3] == 'E')
    {
        v.pop_back();
        v.pop_back();
        return true;
    }

    // v=E; → I

    else if (n >= 3 and v[n - 1] == ';' and v[n - 2] == 'E' and v[n - 3] == '=' and v[n - 4] == 'v')
    {
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.push_back('I');
        return true;
    }
    //(E) → E
    else if (n >= 3 and v[n - 3] == '(' and v[n - 2] == 'E' and v[n - 1] == ')' and (n == 3 or (v[n - 4] != 'i' and v[n - 4] != 'w')))
    {
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.push_back('E');
        return true;
    }

    //i(E)I → I  no es pot aplicar si ve seguida de e 
    // ! ERROR
    else if (n >= 5 and v[n - 5] == 'i' and v[n - 4] == '(' and v[n - 3] == 'E' and v[n - 2] == ')' and v[n - 1] == 'I' and follow != 'e')
    {
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.push_back('I');
        return true;
    }

    // i(E)IeI → I
    else if (n >= 7 and v[n - 1] == 'I' and v[n - 2] == 'e' and v[n - 3] == 'I' and v[n - 4] == ')' and v[n - 5] == 'E' and v[n - 6] == '(' and v[n - 7] == 'i')
    {
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.push_back('I');
        return true;
    }

    // w(E)I → I
    else if (n >= 5 and v[n - 1] == 'I' and v[n - 2] == ')' and v[n - 3] == 'E' and v[n - 4] == '(' and v[n - 5] == 'w')
    {
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.pop_back();
        v.push_back('I');
        return true;
    }

    // LI → L
    else if (n >= 2 and v[n - 1] == 'I' and v[n - 2] == 'L')
    {
        v.pop_back();
        return true;
    }

    // I → L  no es pot aplicar si ve precedida de ) o L
    else if (n >= 1 and v[n - 1] == 'I' and (n == 1 or (v[n - 2] != ')' and v[n - 2] != 'L')))
    {
        v[n - 1] = 'L';
        return true;
    }

    //{L} → I
    else if (n >= 3 and v[n - 1] == '}' and v[n - 2] == 'L' and v[n - 3] == '{')
    {
        v.pop_back();
        v.pop_back();
        v.push_back('I');
        return true;
    }

    // L → P  només es pot aplicar si aquest L és l’únic caràcter que queda, és a dir, si tot l’string inicial ha estat reduït a exactament L.
    else if (n == 1 and v[n - 1] == 'L' and follow == ' ')
    {
        v[n - 1] = 'P';
        return true;
    }
    return false;
}


int main()
{
    string s;
    while (cin >> s)
    {
        vector<char> v;
        for (int i = 0; i < int(s.size()); i++)
        {
            v.push_back(s[i]);
            char follow = ' ';
            if (i + 1 < int(s.size()))
            {
                follow = s[i + 1];
                while (applyOneRule(v, follow));
            }
        }
        string sol;
        for (int i = 0; i < int(v.size()); i++)
            sol += v[i];
        cout << sol << endl;
    }
}
