#include <iostream>
using namespace std;

int main() {
cout.setf(ios::fixed);
cout.precision(2);
int n;
cin>>n;

int x;
double suma = 0;
double suma2 = 0;
while(cin>>x){
    double i = x;
    
suma = suma + i*i;

suma2 = suma2 + i;

}

double suma2_quadrat = (suma2*suma2);





cout<<((1.0/(n-1))*suma)-((1.0/(n*(n-1)))*(suma2_quadrat))<<endl;


}