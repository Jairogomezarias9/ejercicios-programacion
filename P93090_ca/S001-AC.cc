#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Fraccio{
    int num;
    int den;
};

int mcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return mcd(b, a % b);
}

void reduirfraccio(Fraccio &f){
    int m=mcd(f.num,f.den);
    f.num=f.num/m;
    f.den=f.den/m;
}

Fraccio suma(const Fraccio& f1,const Fraccio& f2){
    Fraccio f;
    f.den=f1.den*f2.den;
    f.num = f1.num * f2.den+f2.num * f1.den;
    return f;
}


int main(){
    Fraccio f1;
    Fraccio f;
    f.num=0;
    f.den=1;
    char s;
    bool finalitza=false;

    while(not finalitza){
        cin>>f1.num>>s>>f1.den>>s;
        if(s=='=') finalitza=true;

        reduirfraccio(f1);
        f=suma(f1,f);
        reduirfraccio(f);



        
    }
    cout<<f.num<<"/"<<f.den<<endl;


}