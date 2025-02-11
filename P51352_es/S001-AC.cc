#include <iostream>
using namespace std;

int main() {

    char a, p;
    cin>>a>>p;

    if ((a=='V' and p=='A') or (a=='A' and p=='P') or(a=='P' and p=='V'))
    cout<<'1'<< endl;

    else if ((a=='A' and p=='V') or (a=='P' and p=='A') or(a=='V' and p=='P'))
    cout<<'2'<< endl;

    else cout<<'-'<< endl;


}