#include <iostream>
using namespace std;

int main() {

double x;
double suma=0;
double i=0;

while(cin>>x){
suma=suma+x;
i++;

}

double avg=0;
avg=suma/i;

cout.setf(ios::fixed);
cout.precision(2);

cout<<avg<<endl;

}