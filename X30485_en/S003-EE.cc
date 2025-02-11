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
void printDouble(double d)
{
 if (abs(d) < 1e-7)
  cout << 0.0;
 else
  cout << d;
}

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
void pos_final(Point& punt) {
    printDouble(punt.x);
    cout << ' ';
    printDouble(punt.y);
    cout << ' ';
    printDouble(punt.z);
    cout << '\n';
}
void moviment(Particle& particle, int temps) {
    particle.p.x = particle.p.x + particle.v.x * temps;
    particle.p.y = particle.p.y + particle.v.y * temps;
    particle.p.z = particle.p.z + particle.v.z * temps;
}

void centremasses(vector<Particle>& particles) {
    double numerador= 0;
    double denominador= 0;
    for (int i = 0; i < particles.size(); ++i) {
        numerador = numerador + (particles[i].p.x * particles[i].m);
        denominador = denominador + particles[i].m;
    }
    printDouble(numerador / denominador);
    cout << " ";
    numerador = 0;
    denominador = 0;
    for (int j = 0; j < particles.size(); ++j) {
        numerador = numerador + (particles[j].p.y * particles[j].m);
        denominador = denominador + particles[j].m;
    }
    printDouble(numerador / denominador);
    numerador = 0;
    denominador = 0;
    cout << " ";
    for (int k = 0; k < particles.size(); ++k) {
        numerador = numerador + (particles[k].p.z * particles[k].m);
        denominador = denominador + particles[k].m;
    }
    printDouble(numerador / denominador);
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
        cin >> k;
        for(int i =0;i<n;++i){
            cin>>particles[i].p.x;
            cin>>particles[i].p.y;
            cin>>particles[i].p.z;
            cin>>particles[i].v.x;
            cin>>particles[i].v.y;
            cin>>particles[i].v.z;
            cin>>particles[i].m;
        }
        vector<double> temps(k);
        for (int j = 0; j < k; ++j) cin >> temps[j];
         
        for (int c = 0; c < k; ++c) {
            for (int b = 0; b < particles.size(); ++b) moviment(particles[b], temps[c]);
            centremasses(particles);
        }
        for (int s = 0; k < particles.size()-1; ++s) pos_final(particles[s].p);
        cout << '\n';
   }
}
