#include <iostream>
using namespace std;
int main() {
    int segons;
    cin>>segons;
    int hores,minuts,segonsfinals;

    hores=segons/3600;
    minuts=hores%60;
    segonsfinals=minuts%60;

    cout<<hores<<" "<<minuts<<" "<<segonsfinals<<endl;

    

    
}