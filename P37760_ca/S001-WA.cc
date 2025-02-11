#include <iostream>
#include <cmath>
using namespace std;

double cosinus(double x){
return cos (x*2*M_PI/360);}

double sinus (double y){
    return sin(y*2*M_PI/360);
}


int main(){
    cout.setf(ios::fixed);
	cout.precision(6);

    int x;
    while(cin>>x)
    
    cout<<sinus(x)<<" "<<cosinus(x);
    cout<< endl;

}