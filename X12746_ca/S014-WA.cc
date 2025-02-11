#include <iostream>
#include <string>
#include <map>

using namespace std;
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
    map<int, int>::const_iterator it = v.begin();
    if (it->first == front + 1)
    {
        it = v.erase(it);
        ++front;
    }
}

// Popback en un mapa

void popback(map<int, int>& v, int &back)
{

    map<int, int>::const_iterator it = v.end();
    --it;
    if (it->first == back-1)
    {
        it = v.erase(it);
        --back;
    }
}

// Reorganizar la medida del mapa(resize)

void resize(map<int, int> &v, int &back, int& front)
{
    int newsize;
    cin >> newsize;
    string ending;
    cin >> ending;
    int size = back + front*(-1) - 1; //equivalente a v.size() pero teniendo en cuenta los iteradores auxiliares

    if (size < newsize)
    {
        back += newsize - size;
    }
    else if (size > newsize)
    {
        map<int, int>::const_iterator it = v.end();
        --it;
        while (it->first >= back and it != v.begin())
        {
            it = v.erase(it);
            --it;
        }


        //caso en que el newsize sea 0
        if(it == v.begin() and newsize == 0) it = v.erase(it);
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
    map<int, int>::const_iterator it = v.begin();
    for (int i = front + 1; i < back; ++i)
    {
        
        
        // si hay un elemento, entonces imprime el valor al que apunta el iterador
        if (it != v.end() and it->first==i)
        {
            cout << it->second;
            ++it;
        }
        // posiciones nulas
        else
        {
            cout << '0';
        }
        // Imprime ',' excepto despúes del último valor
        if (i != back - 1)
        {
            cout << ',';
        }
    }
    cout << endl;
}

//cambio de valor dado un índice y el valor

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
            pushbck(v, back);
        }
        else if (command == "v.push_front(")
        {
            pushfnt(v, front);
        }
        else if (command == "v.pop_front();")
        {
            popfront(v, front);
        }
        else if (command == "v.pop_back();")
        {
            popback(v, back);
        }
        else if (command == "v.resize(")
        {
            resize(v, back,front);
        }
        else if (command == "cout<<v[")
        {
            coutv(v, front);
        }
        else if (command == "cout<<v;")
        {
            coutvector(v, front, back);
        }
        else if (command == "v[")
        {
            asignacion(v, front);
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