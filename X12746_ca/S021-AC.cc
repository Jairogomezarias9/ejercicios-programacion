#include <iostream>
#include <string>
#include <map>

using namespace std;
/*
// Pushback en el mapa de un valor, en la posición donde apunta el iterator 'back'
void pushbck(map<int, int> &v, int &back)
{
    int val;
    cin >> val;
    string ending;
    cin >> ending;
    v[back] = val;
    ++back;
}

// Pushfront en el mapa de un valor, en la posición donde apunta el iterator 'front'

void pushfnt(map<int, int> &v, int &front)
{
    int val;
    cin >> val;
    string ending;
    cin >> ending;
    v[front] = val;
    --front;
}

// Popfront en un mapa

void popfront(map<int, int> &v, int &front)
{
    auto it = v.begin();
    if (it->first == front + 1)
    {
        it = v.erase(it);
        ++front;
    }
}

// Popback en un mapa

void popback(map<int, int> &v, int &back)
{

    auto it = v.end();
    --it;
    if (it->first == back - 1)
    {
        it = v.erase(it);
        --back;
    }
}

// Reorganizar la medida del mapa(resize)

void resize(map<int, int> &v, int &back, int &front)
{
    int newsize;
    cin >> newsize;
    string ending;
    cin >> ending;
    int size = back + front * (-1) - 1; // equivalente a v.size() pero teniendo en cuenta los iteradores auxiliares

    if (size < newsize)
    {
        back += newsize - size;
    }
    else if (size > newsize)
    {
        back = front + newsize + 1;

        auto it = v.end();
        --it;
        while (it->first >= back and it != v.begin())
        {
            it = v.erase(it);
            --it;
        }

        // caso en que el newsize sea 0
        if (it == v.begin() and newsize == 0)
        {

            it = v.erase(it);
        }
    }
}

// Imprimir la posición i del mapa

void coutv(map<int, int> &v, int &front)
{
    int index;
    cin >> index;
    string ending;
    cin >> ending;
    cout << v[front + index + 1] << endl;
}

// imprimir todo el mapa

void coutvector(map<int, int> &v, int &front, int &back)
{
    for (int k = front + 1; k < back; ++k)
    {
        auto it = v.find(k);
        // si hay un elemento, entonces imprime el valor al que apunta el iterador
        if (it != v.end())
        {
            cout << it->second;
        }
        // posiciones nulas
        else
        {
            cout << '0';
        }
        // Imprime ',' excepto despúes del último valor
        if (k != back - 1)
        {
            cout << ',';
        }
    }
    cout << endl;
}

// cambio de valor dado un índice y el valor

void asignacion(map<int, int> &v, int &front)
{
    int index;
    cin >> index;
    string mid;
    cin >> mid;
    int val;
    cin >> val;
    string ending;
    cin >> ending;
    v[front + index + 1] = val;
}
*/
int main()
{
    map<int, int> v;
    int front = 0;
    int back = 1;

    string command;
    while (cin >> command)
    {
        if (command == "v.push_back(")
        {
            // pushbck(v, back);
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            v[back] = val;
            ++back;
        }
        else if (command == "v.push_front(")
        {
            // pushfnt(v, front);
            int val;
            cin >> val;
            string ending;
            cin >> ending;
            v[front] = val;
            --front;
        }
        else if (command == "v.pop_front();")
        {
            // popfront(v, front);
            auto it = v.begin();
            if (it->first == front + 1)
            {
                it = v.erase(it);
                
            }
            ++front;
        }
        else if (command == "v.pop_back();")
        {
            // popback(v, back);
            auto it = v.end();
            --it;
            if (it->first == back - 1)
            {
                it = v.erase(it);
                
            }
            --back;
        }
        else if (command == "v.resize(")
        {
             int newsize;
            cin >> newsize;
            string ending;
            cin >> ending; 
            int vsize = back + front*(-1) - 1;

            if (vsize < newsize)
            {
                back += newsize - vsize; 
            }
            else if (vsize > newsize)
            {
                back = front + newsize + 1;
                auto it = v.end();
                --it;
                while (it != v.begin() && it->first >= back) {
                    it = v.erase(it);
                    --it; 
                }
                if(it == v.begin() and newsize == 0) it = v.erase(it);     
            }

            // resize(v, back, front);
            
        }
        else if (command == "cout<<v[")
        {
            // coutv(v, front);
            int index;
            cin >> index;
            string ending;
            cin >> ending;
            cout << v[front + index + 1] << endl;
        }
        else if (command == "cout<<v;")
        {
            
            
            for (int k = front + 1; k < back; ++k) {
                auto it = v.find(k);
                if (it != v.end()) {
                    cout << it->second;
                } else {
                    cout << '0';
                }
                if (k != back - 1) {
                    cout << ',';
                }
            }
            cout << endl;

            // coutvector(v, front, back);
            
        }
        else if (command == "v[")
        {
            // asignacion(v, front);
            int index;
            cin >> index;
            string mid;
            cin >> mid;
            int val;
            cin >> val;
            string ending;
            cin >> ending;
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