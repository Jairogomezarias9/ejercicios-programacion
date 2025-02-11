#include <iostream>
#include <vector>
using namespace std;
struct Punt
{

    double x, y;
};

void llegirvector(vector<Punt> &p)
{
    int n = p.size();
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i].x;
        cin >> p[i].y;
    }
}

bool elementsdiferents(const vector<Punt> &p)
{
    int n = p.size();
    for (int i = 0; i < n - 1; ++i)
    {
        if (p[i].x != p[i + 1].x or p[i].y != p[i + 1].y)
            return true;
    }
    return false;
}

bool suma(const vector<Punt> &p)
{
    int n = p.size();
    int sumax = 0;
    int sumay = 0;
    for (int i = 0; i < n; ++i)
    {
        sumax += p[i].x;
        sumay += p[i].y;
    }
    if (sumax == sumay)
        return true;
    return false;
}

Punt baricentro(int n, const vector<Punt> &p)
{
    int s = p.size();
    Punt resultat;
    int sumax = 0;
    int sumay = 0;
    for (int i = 0; i < s; ++i)
    {
        sumax += p[i].x;
        sumay += p[i].y;
    }
    resultat.x=sumax/n;
    resultat.y=sumay/n;
    return resultat;
}

bool baricentre(const vector<Punt> &v, Punt &b)
{
    int n = v.size();
    for (int i = 0; i < n; ++i)
    {
        if (b.x ==v[i].x and b.y==v[i].y){
            return false;}
    }
    return true;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2);


    int n;

    while (cin >> n)
    {
        vector<Punt> p(n);
        llegirvector(p);
        Punt bar=baricentro(n,p);
        cout<<"baricentre:  ("<<bar.x<<","<<bar.y<<")"<<endl;
        if(elementsdiferents(p) and suma(p) and baricentre(p,bar)){
            cout<<"vector normalitzat"<<endl;

        }
        else if(not elementsdiferents(p) and suma(p) and baricentre(p,bar)){
        cout<<"el vector no compleix la propietat 1"<<endl;}

        else if( elementsdiferents(p) and not suma(p) and baricentre(p,bar)){
            cout<<"el vector no compleix la propietat 2"<<endl;
        }

        else if( elementsdiferents(p) and  suma(p) and not baricentre(p,bar)){
            cout<<"el vector no compleix la propietat 3"<<endl;
        }
        else cout<<"el vector no compleix la propietat 1"<<endl;

    }
}