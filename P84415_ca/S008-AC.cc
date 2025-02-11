#include <iostream>
#include <map>
using namespace std;

int main()
{
    string op;
    map<string, int> bag;
    while (cin >> op)
    {
        
        if (op == "store")
        {
            string word;
            cin >> word;
            if (bag.find(word) == bag.end())
            {
                bag[word] = 1;
            }
            else
            {
                bag[word] += 1;
            }
        }
        else if (op == "delete")
        {
            string word;
            cin >> word;
            if (bag.find(word) != bag.end())
            {
                bag[word] -= 1;
                if (bag[word] == 0)
                    bag.erase(word);
            }
        }
        else if (op == "maximum?")
        {
            if (bag.empty())
                cout << "indefinite maximum" << endl;
            else
            {
                auto it = bag.end();
                --it;
                cout << "maximum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        }
        else if (op == "minimum?")
        {
            if (bag.empty())
                cout << "indefinite minimum" << endl;
            else
            {
                auto it = bag.begin();
                cout << "minimum: " << it->first << ", " << it->second << " time(s)" << endl;
            }
        }
    }
}
