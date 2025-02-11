#include <iostream>
#include <vector>
using namespace std;


struct Temps
{
    int hora, minut, segon;
};

void incrementa(Temps &t){
    ++t.segon;
    if (t.segon > 59)
    {
        t.segon = 0;
        ++t.minut;
        if (t.minut > 59)
        {
            t.minut = 0;
            ++t.hora;
            if (t.hora > 23)
                t.hora = 0;
        }
    }
}

void decrementa(Temps &t){
    --t.segon;
    if (t.segon <0)
    {
        t.segon = 0;
        --t.minut;
        if (t.minut <0)
        {
            t.minut = 0;
            --t.hora;
            if (t.hora <0)
                t.hora = 0;
        }
    }
}





void un_segon(const Temps &t, Temps &t1, Temps &t2){
    t1=t;
    t2=t;
    incrementa(t1);
    decrementa(t2);
 
}

void escriu(Temps &t){
    cout<<t.hora<<" "<<t.minut<<" "<<t.segon;
}
int main(){

    Temps t;
    
 while(cin>>t.hora>>t.minut>>t.segon){
     Temps t1;
     Temps t2;
     un_segon(t,t1,t2);
     escriu(t1);
     cout<<endl;
     escriu(t2);
     cout<<endl;

     
     
 }
  
}