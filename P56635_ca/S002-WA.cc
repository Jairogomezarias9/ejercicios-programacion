#include <iostream>
#include <vector>
using namespace std;

struct Rectangle
{
    int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle &r)
{

    cin >> r.x_esq;
    cin >> r.x_dre;
    cin >> r.y_baix;
    cin >> r.y_dalt;
}

int relacio(const Rectangle &r1, const Rectangle &r2)
{
    if (r1.x_dre == r2.x_dre and r1.x_esq == r2.x_esq and r1.y_baix == r2.y_baix and r1.y_dalt == r2.y_dalt)
    {
        return 4;
    }
    else if (r1.x_dre <= r2.x_dre and r1.x_esq >= r2.x_esq and r1.y_baix >= r2.y_baix and r1.y_dalt <= r2.y_dalt)
    {
        return 2;
    }
    else if (r1.x_dre >= r2.x_dre and r1.x_esq <= r2.x_esq and r1.y_baix <= r2.y_baix and r1.y_dalt >= r2.y_dalt)
    {
        return 1;
    }
    else if(r1.x_esq>r2.x_dre or r2.x_dre<r1.x_esq or r2.y_baix>r1.y_dalt or r1.y_baix>r2.y_dalt){
   return 0;
    }
    else return 3;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        Rectangle r1;
        llegeix(r1);

        Rectangle r2;
        llegeix(r2);
        int r=relacio(r1,r2);

        if (r == 0)
        {
            cout<<"els rectangles no intersecten"<<endl;
        }
        else if (r == 1)
        {
            cout << "el primer rectangle es interior al segon" << endl;
        }
        else if (r == 2)
        {
            cout << "el segon rectangle es interior al primer" << endl;
        }
        else if (r == 3)
        {
            cout<<"els rectangles intersecten"<<endl;
        }
        else if (r == 4)
        {
            cout << "els rectangles son iguals" << endl;
        }
    }
}