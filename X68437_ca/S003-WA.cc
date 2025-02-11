#include <iostream>
#include <vector>
using namespace std;

int numberSubsequences(const string &s, char c1, char c2, char c3)
{
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int n = s.size();

    /*algoritme de suma que ens permet incloure cada un dels possibles casos
    per generar un resultat correcte*/

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == c1)
        {
            ++contador1;
        }
        else if (s[i] == c2)
        {
            contador2 = contador2 + contador1;
        }
        else if (s[i] == c3)
        {
            contador3 = contador3 + contador2;
        }
    }
    return contador3;
}
int numberHappySubsequences(const string &s)
{
    int resultat = 0;
    resultat = numberSubsequences(s, ':', '-', ')');
    resultat = resultat + numberSubsequences(s, '(', '-', ':');
    return resultat;
}

int numberSadSubsequences(const string &s)
{
    int resultat = 0;
    resultat = numberSubsequences(s, ':', '-', '(');
    resultat = resultat + numberSubsequences(s, ')', '-', ':');
    return resultat;
}

int main()
{
    string s;
    while (cin >> s)
    {
        int content = numberHappySubsequences(s);
        int trist = numberSadSubsequences(s);
        cout << content << " " << trist;
    }
}