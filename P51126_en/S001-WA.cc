#include <iostream>
using namespace std;

int main () {

 int a1,b1,a2,b2;
 cin >> a1 >> b1 >> a2 >> b2;

 if (a1>=a2 and b1<=b2) {
    cout<<"["<< a1 << "," << b1 << "["<<endl;
 }

 else if (a1<=a2 and b1>=b2) {
    cout<<"["<< a2 << "," << b2 << "]"<<endl;
 }

 
 

 else if (b2>=a1 and a1>=a2) {
    cout<<"["<< a1 << "," << b2 << "]"<<endl;
 }

 else if (b2<a1 or b1<a2)  {
    cout<< "[" << "]" <<endl;}

 else {
    cout<<"["<< a1 << "," << b2 << "]"<<endl;
 }
}