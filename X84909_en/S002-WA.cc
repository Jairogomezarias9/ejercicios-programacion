#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Slot
{
    vector<string> listsubjects;
    vector<string> listteachers;
};

typedef vector<vector<Slot> > TableSlots;

void primerapart(const vector<string> &s, TableSlots &t, string materia, string profe, string dia, int primera, int segona, int &horamaxima, int &horaminima)
{

    if (primera < horaminima)
    {
        horaminima = primera;
    }
    if (segona > horamaxima)
    {
        horamaxima = segona;
    }
    bool trobat = false;

    int dialinia = -1;
    for (int i = 0; i < 5; ++i)
    {
        if (not trobat and dia == s[i])
        {
            dialinia = i;
            trobat = true;
        }
    }

    for (int i = primera; i < segona; ++i)
    {
        t[i][dialinia].listsubjects.push_back(materia);
        t[i][dialinia].listteachers.push_back(profe);
    }
}

int main()
{

    int horamin = 25;
    int horamax = 0;

    string materia, profe, dia;
    int primerahora, segonahora;
    TableSlots taula(25, vector<Slot>(5));
    vector<string> s;
    s.push_back("monday");
    s.push_back("tuesday");
    s.push_back("wednesday");
    s.push_back("thursday");
    s.push_back("friday");
    

    while (cin >> materia >> profe >> dia >> primerahora >> segonahora)
    {
        primerapart(s, taula, materia, profe, dia, primerahora, segonahora, horamax, horamin);
    }
    //primera taula.
    cout << "number of subjects per slot:" << endl;
    cout << " h    monday   tuesday wednesday  thursday    friday" << endl;

    for (int i = horamin; i < horamax; ++i)
    {
        if (i < 10)
            cout << " ";
        cout << i;

        for (int j = 0; j < 5; ++j)
        {

            
            if (taula[i][j].listsubjects.size() < 10)
            {
                cout << "         " << taula[i][j].listsubjects.size();
            }
            else if (taula[i][j].listsubjects.size() < 100)
            {
                cout << "        " << taula[i][j].listsubjects.size();
            }
            else if (taula[i][j].listsubjects.size() < 1000)
            {
                cout << "       " << taula[i][j].listsubjects.size();
            }
            else
            {
                cout << "      " << taula[i][j].listsubjects.size();
            }
            
        }

        cout << endl;
    }

    //segona taula

    cout<<"number of teachers per slot:"<<endl;
    cout<<" h    monday   tuesday wednesday  thursday    friday"<<endl;


    int reemplacaments=0;
    for(int i =horamin;i<horamax;++i){
        if(i<10) cout<<" ";
        cout<<i;
        for(int j=0;j<5;++j){
            vector<string> v;

            v=taula[i][j].listteachers;

            sort(v.begin(),v.end());

            int professorunic=0;
            
            int professorsremplacats=1;
            if(v.size()!=0){
                professorunic=1;
            }

            
            for(int w=1;w<v.size();++w){
                if(v[w]!=v[w-1]){
                    ++professorunic;
                    ++professorsremplacats;
                }
            }

            if(professorsremplacats<taula[i][j].listsubjects.size()){
                reemplacaments+=((taula[i][j].listsubjects.size()) - professorsremplacats);
            }

            
            if (professorsremplacats < 10)
            {
                cout << "         " << professorsremplacats;
            }
            else if (professorsremplacats < 100)
            {
                cout << "        " << professorsremplacats;
            }
            else if (professorsremplacats < 1000)
            {
                cout << "       " << professorsremplacats;
            }
            else
            {
                cout << "      " << professorsremplacats;
            }



        }
        cout<<endl;

        
    }
    //replacements
        cout<<"number of replacements needed to avoid conflicts:";
        cout<<endl<<reemplacaments<<endl;

   







}