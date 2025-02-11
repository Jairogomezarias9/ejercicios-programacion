#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    string command;
    while (cin >> command)
    {
        if (command == "v.push_back(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            l.push_back(val);
        }
        else if (command == "v.push_front(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            l.push_front(val);
        }
        else if (command == "v.pop_front();")
        {
            l.pop_front();
        }
        else if (command == "v.pop_back();")
        {
            l.pop_back();
        }
        else if (command == "v.resize(")
        {
            int newsize;
            cin >> newsize;
            string ending;
            cin >> ending;
            list<int>::const_iterator it=l.begin();
            if (newsize > l.size())
            {
                for (it = l.begin(); it != l.end(); ++it)
                {
                    ++it;
                }
                for (int i = 0; i < newsize - l.size(); ++i)
                {
                    l.insert(it, 0);
                    ++it;
                }
            }

            else if(newsize<l.size())
            {

                
                for (int i = l.size()+1; i > l.size() - newsize; --i)
                {
                    l.pop_back();
                    
                }
            }
        }
        else if (command == "cout<<v[")
        {
            int index;
            cin >> index;
            string ending;
            cin >> ending;
            list<int>::const_iterator it = l.begin();
            for (int i = 0; i < index; ++i)
            {
                ++it;
            }
            cout << *it;
        }
        else if (command == "cout<<v;")
        {

            {
                list<int>::const_iterator it = l.begin();
                cout << *it;
                ++it;

                for (; it != l.end(); ++it)
                {
                    cout << "," << *it;
                }
            }
        }
        else if (command == "v[")
        {
            int index;
            cin >> index;
            string mid;
            cin >> mid; // Això consumeix el "]="
            int val;
            cin >> val;
            string ending;
            cin >> ending;

            list<int>::const_iterator it = l.begin();

            for (int i = 0; i < index; ++i)
            {
                ++it;
            }
            it=l.erase(it);
            l.insert(it, val);
        }
        else if (command == "//")
        {
            string comment;
            getline(cin, comment);
            cout << "//" << comment << endl;
        }
        else
        {
            cout << "Wrong command '" << command << "'" << endl;
            string discard;
            getline(cin, discard);
        }
        cout << endl;
    }
}