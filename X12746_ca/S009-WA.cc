#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, int> v;
    int front, back;
    front = 0;
    back = 1;

    string command;
    while (cin >> command)
    {
        if (command == "v.push_back(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            v[back] = val;
            ++back;  
        }
        else if (command == "v.push_front(")
        {
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            v[front] = val;
            --front;
        }
        else if (command == "v.pop_front();")
        {
            map<int, int>::const_iterator it = v.begin();

            it = v.erase(it);
            ++front;
        }
        else if (command == "v.pop_back();")
        {
            map<int, int>::const_iterator it = v.end();
            --it;
            it = v.erase(it);
            --back;
        }
        else if (command == "v.resize(")
        {
            int newsize;
            cin >> newsize;
            string ending;
            cin >> ending; // Això consumeix el ");"
            int vsize = back+(-1*front)-1;

            if (vsize < newsize)
            {
                back += newsize - vsize; 
            }
            else if (vsize > newsize)
            {
                map<int, int>::const_iterator it = v.end();
                while (v.size() > newsize and it != v.begin())
                {
                    --it;
                    it = v.erase(it);
                    --back;
                }
            }
        }
        else if (command == "cout<<v[")
        {
            int index;
            cin >> index;
            string ending;
            cin >> ending;
            cout << v[front + index + 1] << endl;
        }
        else if (command == "cout<<v;")
        {
           

            for (int k = front + 1; k < back; ++k)
            {
                map<int, int>::const_iterator it = v.find(k);
                if (it != v.end())
                {
                    cout << it->second;
                }
                else
                {
                    cout << '0';
                }
                if (k != back - 1)
                {
                    cout << ',';
                }
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

            v[front + index + 1] = val;
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