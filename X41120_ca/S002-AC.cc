#include <iostream>
#include <vector>
using namespace std;

// llegir el vector
vector<int> llegir()
{
    int n;
    cin >> n;
    vector<int> lector(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> lector[i];
    }
    return lector;
}

// calcular els pics

vector<int> calcula_cims(const vector<int> &v)
{
    int n = v.size();
    vector<int> calcula;
    for (int i = 1; i < n - 1; ++i)
    {
        if (v[i - 1] < v[i] and v[i + 1] < v[i])
        {
            calcula.push_back(v[i]);
        }
    }
    return calcula;
}

// imprimir el numero de cims i els cims

void imprimir_cims(const vector<int> &calcula)
{
    int n = calcula.size();
    cout << n << ":";

    for (int i = 0; i < n; ++i)
    {
        cout << " " << calcula[i];
    }
    cout << endl;
}

// imprimir els pics més grans que lúltim

void imprimir_pics_mes_alts(const vector<int> &calcula)
{
    int ultim_pic = calcula.size() - 1;
    bool hi_ha_un_pic_mes_alt = false;

    for (int i = 0; i < ultim_pic; ++i)
    {
        if (calcula[i] > calcula[ultim_pic])
        {
            if (not hi_ha_un_pic_mes_alt)
            {
                cout << calcula[i];
                hi_ha_un_pic_mes_alt = true;
            }
            else
            {
                cout << " " << calcula[i];
            }
        }
    }

    if (not hi_ha_un_pic_mes_alt)
    {
        cout << "-";
    }
    cout << endl;
}

int main()
{
vector<int> llegir_vector = llegir();
vector<int> cims =calcula_cims(llegir_vector);
imprimir_cims(cims);
imprimir_pics_mes_alts(cims);


}