#include <iostream>
using namespace std;

int main() {

char letra;
bool found = false;

while(not found and letra != '.'){
    cin>>letra;

    if(letra=='a') 
    found=true;
}
 if(found) {cout<<"yes";}
 else {cout<<"no";}
 cout<<endl;
}