#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> M;
    char c;
    while (cin >> c)
    {
        if (c == 'N')
        {
            cout <<"number: "<< M.size() << endl;
        }
        else if (c == 'D')
        {
            string nif;
            int money;
            cin >> nif >> money;
            M[nif] = money;
        }
        else if (c == 'Q')
        {
            string nif;
            cin >> nif;
            auto it = M.find(nif);
            if (it != M.end())
            {
                cout << it->second << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (c == 'P')
        {
            auto it = M.begin();
            bool trobat = false;
            for (it; it != M.end(); ++it)
            {
                string s = it->first;
                if (s[s.size() - 2] % 2 == 0)
                {
                    if (not trobat)
                    {
                        trobat = true;
                    }
                    else
                    {
                        cout << " ";
                    }
                    cout << it->first;
                }
            }
            cout << endl;
        }
        else
        { // c == ’L’
            if(M.size()<1){
                cout<<"NO LAST NIF"<<endl;
            }
            else{
                auto it=M.end();
                --it;
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }
}
