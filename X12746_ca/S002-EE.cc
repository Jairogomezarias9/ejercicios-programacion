#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, int> m;
    int front = 0;
    int back = 0;

    string command;

    while (cin >> command)
    {
        if (command == "v.push_back(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            ++back;
            m[back] = val;
        }
        else if (command == "v.push_front(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            m[front] = val;
            --front;
        }
        else if (command == "v.pop_front();")
        {
            map<int, int>::const_iterator it = m.begin();

            it = m.erase(it);
            ++front;
        }
        else if (command == "v.pop_back();")
        {
            map<int, int>::const_iterator it = m.end();
            it = m.erase(it);
            --back;
        }
        else if (command == "v.resize(")
        {
            int newsize;
            cin >> newsize;
            string ending;
            cin >> ending; // Això consumeix el ");"

            if (m.size() < newsize)
            {
                back=newsize-front;
            }
            else if (back - front > newsize)
            {
                map<int, int>::const_iterator it = m.end();

                while (m.size() > newsize)
                    --it;
                it = m.erase(it);
            }
        }
        else if (command == "cout<<v[")
        {
            int index;
            cin >> index;
            string ending;
            cin >> ending;
            cout << m[front + index + 1] << endl;
        }
        else if (command == "cout<<v;")
        {
            map<int, int>::const_iterator it = m.begin();
            cout << it->second;
            ++it;
            for (; it != m.end(); ++it)
            {
                cout << "," << it->second;
            }
            cout << endl;
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
            cin >> ending; // Això consumeix el ";"
                           // ...

            m[front + index + 1] = val;
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
    }
}
