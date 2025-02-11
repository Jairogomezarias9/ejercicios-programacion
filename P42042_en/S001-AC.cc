#include <iostream>

using namespace std;

int main() {

    char x;
    cin>>x;

    if (int(x)<= int('Z') and int(x)>=int('A')) cout<<"uppercase"<< endl;
    else cout<<"lowercase"<< endl;

    if (x=='a' or x=='e' or x=='i' or x=='o')  cout<<"vowel"<< endl;
    else if((x=='A' or x=='E' or x=='I' or x=='O') ) cout<<"vowel"<< endl;
    else if(x=='u' or x=='U')  cout<<"vowel"<< endl;
    else cout<<"consonant"<< endl;
}