#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    int x, y, z;
};
struct Particle {
    Point p, v;
    int m;
};


Point mul(double a, const Point &p)
{
Point punt;
punt.x=a*p.x;
punt.y=a*p.y;
punt.z=a*p.z;

return punt;
 
}


Point sum(Point p1, Point p2)
{
 Point p;
 p.x=p1.x+p2.x;
 p.y=p1.y+p2.y;
 p.z=p1.z+p2.z;

 return p;
}
Point moviment(Particle& particle, int temps) {
    particle.p.x =  particle.p.x+particle.v.x * temps;
    particle.p.y =   particle.p.y+ particle.v.y * temps;
    particle.p.z =    particle.p.z+particle.v.z * temps;
    return particle.p;
}
Point dividirmassa(Point p,double massa){
    p.x=p.x/massa;
    p.y=p.y/massa;
    p.z=p.z/massa;
    return p;
}

void printDouble(double d)
{
 if (abs(d) < 1e-7)
  cout << 0.0;
 else
  cout << d;
}
void pos_final(Point punt) {
    printDouble(punt.x);
    cout << ' ';
    printDouble(punt.y);
    cout << ' ';
    printDouble(punt.z);
    cout << '\n';
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(5);
  
    int n, k;
    while(cin>>n){
        vector<Particle> particles(n);
        double massa=0;
        Point variacion;
        
        variacion.x=0;
        variacion.y=0;
        variacion.z=0;
        Point origen=variacion;

        cin >> k;
        for(int i =0;i<n;++i){
            cin>>particles[i].p.x;
            cin>>particles[i].p.y;
            cin>>particles[i].p.z;
            cin>>particles[i].v.x;
            cin>>particles[i].v.y;
            cin>>particles[i].v.z;
            cin>>particles[i].m;

            variacion=sum(variacion,mul(particles[i].m,particles[i].v));
            origen=sum(origen,mul(particles[i].m,particles[i].p));
            massa +=particles[i].m;

        }
        double totaltiempo=0;
         double temps;       
         
        while(k > 0){
            cin >> temps; 
            totaltiempo +=temps;       
            printDouble((variacion.x*totaltiempo + origen.x)/massa);
            cout << ' ';
            printDouble((variacion.y*totaltiempo + origen.y)/massa);
            cout << ' ';
            printDouble((variacion.z*totaltiempo + origen.z)/massa);
            cout << '\n';
            --k;
        }
       
       for(int i=0;i<n;++i){
        pos_final(moviment(particles[i],totaltiempo));




       }
       cout << '\n';
   }
}