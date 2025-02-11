#include <iostream>
using namespace std;
int main()
{

    int l, w, s;

    while (cin >> l)
    {
        cin >> w;
        cin >> s;

        for (int i = 0; i < l / 2; i++)
        {

            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }

            for (int z = 0; z < w; z++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < l / 2; ++i)
        {
            for (int j = 0; j < l / 2 - i; ++j)
            {
                cout << " ";
            }
            for (int z = 0; z < w; ++z)
            {
                cout << "*";
            }
            cout << endl;
        }

        for (int i = 0; i < l / 2; i++)
        {

            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }

            for (int z = 0; z < w; z++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < l / 2; ++i)
        {
            for (int j = 0; j < l / 2 - i; ++j)
            {
                cout << " ";
            }
            for (int z = 0; z < w; ++z)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    cout<<endl;
    
}
